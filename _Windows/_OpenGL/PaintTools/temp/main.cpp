#include <iostream>
#include <windows.h>
#include <gl/gl.h>
#include "GL/glu.h"
#include "myHeader.h"
#include "PaintTools.h"


LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

void rebuildwindow(HWND, int, HINSTANCE);

void EnableOpenGL(HWND hwnd, HDC *, HGLRC *);

void DisableOpenGL(HWND, HDC, HGLRC);

float theta = 0.0f;

int WinMain(HINSTANCE hInstance,
            HINSTANCE hPrevInstance,
            LPSTR lpCmdLine,
            int nCmdShow) {
    WNDCLASSEX wcex;
    HWND hwnd;
    HDC hDC;
    HGLRC hRC;
    MSG msg;
    BOOL bQuit = FALSE;



    /* register window class */
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_OWNDC;
    wcex.lpfnWndProc = WindowProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH) GetStockObject(BLACK_BRUSH);
    wcex.lpszMenuName = nullptr;
    wcex.lpszClassName = "GLSample";
    wcex.hIconSm = LoadIcon(nullptr, IDI_APPLICATION);


    if (!RegisterClassEx(&wcex))
        return 0;

    /* create main window */
    hwnd = CreateWindowEx(0,
                          "GLSample",
                          "OpenGL Sample",
                          WS_EX_TOPMOST | WS_POPUP, //WS_EX_TOPMOST | WS_POPUP or WS_OVERLAPPEDWINDOW
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          1920 * 1,
                          1080 * 1,
                          nullptr,
                          nullptr,
                          hInstance,
                          nullptr);

    ShowWindow(hwnd, nCmdShow);

    /* enable OpenGL for the window */
    EnableOpenGL(hwnd, &hDC, &hRC);


// -----------------------------------my code---------------------------------------
    int Nquad = 1000;
    bool MemoryAllocated;
    // create plan B
    Quad quads[10];
    // try to get memory
    Quad *pQuad = new(std::nothrow) Quad[Nquad];
    // check result
    if ((MemoryAllocated = pQuad != nullptr)) {
        std::cout << "OK " << (double) sizeof(Quad) * Nquad / (1024.0 * 1024.0) << " MB" << '\n';
    } else { //if unlucky
        Nquad = 10;
        pQuad = quads;
    }

    for (int i = 0; i < Nquad; i++) {
        pQuad[i].QuadGenerate();
    }
// ---------------------------------------------------------------------------------
    int Ncirc = 500;
    Circle circles[Ncirc];
    for (int i = 0; i <= Ncirc; ++i) {
        circles[i].generate();
    }


    int Npoints = 4000;
    Point points[Npoints];
    for (int i = 0; i <= Npoints; ++i) {
        points[i].generate();
    }

// -----------------------------------my code end-----------------------------------
    int xScreenResolution = GetSystemMetrics(SM_CXSCREEN);
    int yScreenResolution = GetSystemMetrics(SM_CYSCREEN);
    std::cout << "Current Resolution is: " << xScreenResolution << "x" << yScreenResolution << std::endl;

    int width = GetSystemMetrics(SM_CXFULLSCREEN);
    int height = GetSystemMetrics(SM_CYFULLSCREEN);
    std::cout << "Current Resolution is: " << width << "x" << height << std::endl;
//----------------------------------------------------------------------------------


    /* program main loop */
    while (!bQuit) {
        /* check for messages */
        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE)) {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT) {
                bQuit = TRUE;
            } else {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        } else {

//--------------------OpenGL animation code goes here-------------------------------

            glClearColor(0.5f, 0.5f, 0.9f, 1.0f);
            glClearColor(0.0, 0.0, 0.0, 1.0);
            glClear(GL_COLOR_BUFFER_BIT);

// -----------------------------------my code---------------------------------------
            for (int i = 0; i < Nquad; i++) {
                pQuad[i].Rotate();
                pQuad[i].ShowQuad();
            }

            for (int i = 0; i <= Ncirc; ++i) {
                circles[i].show_width(theta / 36 * 2.0 / 1920);
                circles[i].show();
            }


            for (int i = 0; i <= Npoints; ++i){
//                points[i].transform(0.99);
                points[i].show();

                float R = points[i].cenx * points[i].cenx +
                          points[i].ceny * points[i].ceny;
                if (R < 20.0/1920 * 20.0/1920){
                    points[i].generate();
                }
            }
// -----------------------------------my code---------------------------------------

            SwapBuffers(hDC);

            theta += 1.0f;
            if (theta >= 360) theta = 0;
//            Sleep(1 / 60);
// -----------------------------------my code---------------------------------------
        }
    }

    if (MemoryAllocated) {
        delete[] pQuad;
    }
// -----------------------------------my code---------------------------------------


    /* shutdown OpenGL */
    DisableOpenGL(hwnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow(hwnd);

    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CLOSE:
            PostQuitMessage(0);
            break;

        case WM_DESTROY:
            return 0;

        case WM_KEYDOWN: {
            switch (wParam) {
                case VK_ESCAPE:
                    PostQuitMessage(0);
                    break;
                case VK_TAB:
                    std::cout << theta << std::endl;
                    theta = 0;
                    break;

            }
        }
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

void EnableOpenGL(HWND hwnd, HDC *hDC, HGLRC *hRC) {
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC(hwnd);

    /* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hDC, &pfd);

    SetPixelFormat(*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hDC);

    wglMakeCurrent(*hDC, *hRC);
}

void DisableOpenGL(HWND hwnd, HDC hDC, HGLRC hRC) {
    wglMakeCurrent(nullptr, nullptr);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}

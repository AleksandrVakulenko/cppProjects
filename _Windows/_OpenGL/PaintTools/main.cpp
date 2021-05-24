#include <iostream>
#include <windows.h>
#include <gl/gl.h>
#include "GL/glu.h"
#include "myHeader.h"
#include "PaintTools.h"


int Numbers[200];

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

void rebuildwindow(HWND, int, HINSTANCE);

void EnableOpenGL(HWND hwnd, HDC *, HGLRC *);

void DisableOpenGL(HWND, HDC, HGLRC);

float theta = 0.0f;
int iteration = 0;

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
    int xScreenResolution = GetSystemMetrics(SM_CXSCREEN);
    int yScreenResolution = GetSystemMetrics(SM_CYSCREEN);
    std::cout << "Current Resolution is: " << xScreenResolution << "x" << yScreenResolution << std::endl;

    int width = GetSystemMetrics(SM_CXFULLSCREEN);
    int height = GetSystemMetrics(SM_CYFULLSCREEN);
    std::cout << "Current Resolution is: " << width << "x" << height << std::endl;
// ---------------------------------------------------------------------------------
    int pixel_count = 10000;
    Color cl;
    cl.R = 255;
    cl.G = 255;
    cl.B = 255;
    Pixel pxArray[pixel_count];
    Coordinate centers[pixel_count];
    for (int i = 0; i < pixel_count; ++i) {
        pxArray[i].set_color(cl);
        centers[i] = Coordinate(randomRange(100, 250), randomRange(1, 1500));
        pxArray[i].moveto(centers[i]);
    }


//    std::cout << "Int:" << std::endl
//              << "X = " << pxArray[1].get_center().i_crd.X << ' '
//              << "Y = " << pxArray[1].get_center().i_crd.Y << std::endl;
//    std::cout << "Float:" << std::endl
//              << "X = " << pxArray[1].get_center().f_crd.X << ' '
//              << "Y = " << pxArray[1].get_center().f_crd.Y << std::endl;
//    pxArray[1].rotate(Angles::Angle(10));
//    std::cout << "Int:" << std::endl
//              << "X = " << pxArray[1].get_center().i_crd.X << ' '
//              << "Y = " << pxArray[1].get_center().i_crd.Y << std::endl;
//    std::cout << "Float:" << std::endl
//              << "X = " << pxArray[1].get_center().f_crd.X << ' '
//              << "Y = " << pxArray[1].get_center().f_crd.Y << std::endl;


//----------------------------------------------------------------------------------


// -----------------------------------my code end-----------------------------------

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
            for (int i = 0; i < pixel_count; ++i) {
                pxArray[i].draw();
//                pxArray[i].shiftby(-1920/2, -1016/2);
//                pxArray[i].rotate(Angles::Angle(theta));
//                pxArray[i].shiftby(1920/2, 1016/2);
                pxArray[i].moveto(pxArray[i].get_center().i_crd.X, pxArray[i].get_center().i_crd.Y * 0.995);

                if (iteration == 300) {
                    for (int k = 0; k < 200; ++k) {
                        if (k == pxArray[i].get_center().i_crd.Y)
                            Numbers[k] += 1;
                    }
                    //std::cout << pxArray[i].get_center().i_crd.Y << std::endl;
                }
            }

// -----------------------------------my code---------------------------------------
            SwapBuffers(hDC);

            theta = (float) 1.0;
            ++iteration;
            //if (theta >= 360) theta = 0;
            //Sleep(1000 / 60);
// -----------------------------------my code---------------------------------------
        }
    }


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
                    std::cout << iteration << std::endl;
                    for (int k = 0; k < 200; ++k) {
                        std::cout << "K = " << k << " res = " << Numbers[k] << std::endl;
                    }
                    PostQuitMessage(0);
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

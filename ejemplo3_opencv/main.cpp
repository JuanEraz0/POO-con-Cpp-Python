#include <opencv2/opencv.hpp>
#include<iostream>

int main() {
    // Abrir la cámara predeterminada (0,  o si es una conectada por USB se indica otro numero)
    cv::VideoCapture cap(0);

    // Verificar si la cámara se ha abierto correctamente
    if (!cap.isOpened()) {
        std::cout << "No se pudo abrir la cámara" << std::endl;
        return -1;
    }

    // Crear una ventana para mostrar el video
    cv::namedWindow("Video de la cámara", cv::WINDOW_AUTOSIZE);

    // Variable para almacenar cada fotograma
    cv::Mat frame;

    while (true) {
        // Capturar cada fotograma de la cámara
        cap >> frame;

        // Si el fotograma está vacío, detener el bucle
        if (frame.empty()) {
            std::cout << "No se pudo capturar el fotograma" << std::endl;
            break;
        }

        // Mostrar el fotograma en la ventana
        cv::imshow("Video de la cámara", frame);

        // Esperar 1 milisegundo y salir si el usuario presiona 'q'
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    // Cerrar la cámara y destruir todas las ventanas
    cap.release();
    cv::destroyAllWindows();

    return 0;
}

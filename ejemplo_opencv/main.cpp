#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
    // Crear una imagen en negro
    Mat image = Mat::zeros(480, 640, CV_8UC3);
    
    // Dibujar un círculo rojo en el centro
    circle(image, Point(320, 240), 100, Scalar(255, 0, 255), 1);
    
    // Mostrar la imagen
    imshow("Imagen con OpenCV", image);
    waitKey(0);
    return 0;
}

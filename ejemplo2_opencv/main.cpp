#include <opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main() {
    // Cargar la imagen desde un archivo (reemplaza "imagen.jpg" con la ruta a tu imagen)
    Mat image = imread("/home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/ejemplo2_opencv/images/lena.png");

    // Verificar si la imagen fue cargada correctamente
    if (image.empty()) {
        cout << "No se pudo abrir o encontrar la imagen" << endl;
        return -1;
    }

    // Mostrar la imagen en una ventana
    imshow("lena en OpenCV", image);

    // Esperar a que el usuario presione una tecla
    waitKey(0);
    // Cerrar todas las ventanas abiertas
    destroyAllWindows();

    return 0;
}
import cv2
image_rgb = cv2.imread('/home/juan-jose-erazo-pacheco/Desktop/Servicio_Social_LABCOM/finger-tracker-opCV/de2.jpg')

image_hsv = cv2.cvtColor(image_rgb, cv2.COLOR_BGR2HSV)

# Muestra la imagen original en una ventana
cv2.imshow('Imagen RGB', image_rgb)

# Muestra la imagen en HSV en otra ventana
cv2.imshow('Imagen HSV', image_hsv)

# Espera a que se presione una tecla para cerrar las ventanas
cv2.waitKey(0)
cv2.destroyAllWindows()



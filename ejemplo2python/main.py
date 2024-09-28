class Vehiculo:
    def __init__(self, tipo, color, ancho, alto, largo):
        # Atributos de la clase
        self.tipo = tipo
        self.color = color
        self.ancho = ancho
        self.alto = alto
        self.largo = largo

    def arrancar(self):
        print(f"El vehículo {self.tipo} está arrancando.")

    def acelerar(self):
        print(f"El vehículo {self.tipo} está acelerando.")

    def frenar(self):
        print(f"El vehículo {self.tipo} está frenando.")

    # Métodos getter
    def get_color(self):
        return self.color

    def get_ancho(self):
        return self.ancho

    def get_alto(self):
        return self.alto

    def get_largo(self):
        return self.largo

    # Métodos setter
    def set_color(self, nuevo_color):
        self.color = nuevo_color

    def set_ancho(self, nuevo_ancho):
        self.ancho = nuevo_ancho

    def set_alto(self, nuevo_alto):
        self.alto = nuevo_alto

    def set_largo(self, nuevo_largo):
        self.largo = nuevo_largo


def main():
    vehiculo_hatch = Vehiculo("hatchback", "rojo", 150, 180, 180)
    vehiculo_lem = Vehiculo("deportivo", "rojo", 200, 150, 250)
    vehiculo_city = Vehiculo("city", "azul", 150, 160, 150)

    # Llamada a los métodos
    vehiculo_hatch.arrancar()
    vehiculo_lem.acelerar()
    vehiculo_city.frenar()

    # Uso de métodos getter y setter
    print(vehiculo_hatch.get_color())  # rojo
    vehiculo_hatch.set_color("verde")
    print(vehiculo_hatch.get_color())  # verde


# Punto de entrada del programa
if __name__ == "__main__":
    main()

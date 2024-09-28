from Vehiculo import Vehiculo 
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

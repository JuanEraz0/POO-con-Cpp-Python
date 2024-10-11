from RNmulti import Neural
import numpy as np

def main():
    x= np.array([8,2,5])
    eta = 0.1
    y=3
    neurona_1 = Neural(x,np.array([[0.1, 0.2],[0.8,0.9],[0.1,0.5]]), np.array([-5,7]),eta,y)
    neurona_2 = Neural(x,np.array([[0.4],[0.7]]), -3, eta, y)

    print(neurona_1.vect_func_h())
    a_1 = neurona_1.output_sigmoid_a()
    print(a_1)

    #se actualiza la entrada de la otra neurona para que se pase a la segunda capa
    neurona_2.x = a_1

    print(neurona_2.vect_func_h())

    #salida total de la red
    print(neurona_2.output_tanh_a())
    


if __name__ == '__main__':
    main()
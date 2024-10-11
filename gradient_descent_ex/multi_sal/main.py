from multonn import Multonn
import numpy as np
def main():
    x = np.array([2,4])
    w = np.array([[0.1, 0.6],[0.3,0.8]])
    b=[-1,0]
    y=[1,2]


    red_neuronal = Multonn(x,w,b,y,0.1)

    print('Salida: ', red_neuronal.sigmoid(red_neuronal.vect_func_h()),
          'Error: ', red_neuronal.error_term(),
          'Incremento:', red_neuronal.increment(0))
    
    #Calcular nuevos pesos
    print('NUEVOS PESOS:')
    n_w = red_neuronal.w + red_neuronal.increment(0)
    red_neuronal.w=n_w
    print('NUEVOS VALORES')
    #iteramos de nuevo
    print('Salida: ', red_neuronal.sigmoid(red_neuronal.vect_func_h()),
          'Error: ', red_neuronal.error_term(),
          'Incremento:', red_neuronal.increment(0))
    

    
        









if __name__ == '__main__':
    main()
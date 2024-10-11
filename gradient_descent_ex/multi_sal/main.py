from multonn import Multonn
import numpy as np
def main():
    x = np.array([2,4])
    w = np.array([[0.1, 0.6],[0.3,0.8]])
    b=[-1,0]

    red_neuronal = Multonn(x,w,b,[1,2],0.1)

    print('Salida: ', red_neuronal.sigmoid(red_neuronal.vect_func_h()),
          'Error: ', )









if __name__ == '__main__':
    main()
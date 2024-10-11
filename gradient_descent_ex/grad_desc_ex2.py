import numpy as np

#Ejemplo de red neuronal de varias salidas

#funcion de activacion

def sigomoid(h):
    return 1/(1 + np.exp(-h))
def output_y(x,w,b):
    return sigomoid(vect_func_h(x,w,b))
def vect_func_h(x,w,b):
    return np.dot(x,w) + b

def main():
    
    x = np.array([2,4])
    w = np.array([[0.1, 0.6],[0.3,0.8]])
    b=[-1,0]

    print(vect_func_h(x,w,b), sigomoid(vect_func_h(x,w,b)), output_y(x,w,b))
    


if __name__ == "__main__":
    main()

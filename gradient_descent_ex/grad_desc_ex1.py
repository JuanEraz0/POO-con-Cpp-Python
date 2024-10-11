import numpy as np

#funcion de activación

def sigmoid(h):
    return 1/(1 + np.exp(-h))

#Derivada de f(h)
def sigmoid_prime(h):
    return sigmoid(h)*(1 -sigmoid(h))

#funcion h lineal, devuelve el producto punto de los pesos con las entradas
def function_h(X,W,b):
    return np.dot(W,X) + b

# Salida de la red neuronal 

def output_y(X,W,b):
    return sigmoid(function_h(X,W,b))

#Término de error
#recibe como parámetros, la salida deseada, el vector de pesos y el vector de entradas
def error_term(y,W,X,b):
    error = (y-output_y(X,W,b))
    delta = error *sigmoid_prime(function_h(X,W,b))
    return delta

#eta es la tasa de aprendizaje
def increment(W,X,b,eta,i,y):
    incremento = eta* error_term(y,W,X,b)*X[i]
    return incremento

def main():
    print('MI PRIMERA RED NEURONAL')
    learning_rate = 0.1
    #valores de entrada
    x=np.array([1,1])
    #valores esperados de salida
    y= 5

    #pesos iniciales
    w = np.array([0.1,0.2])
    b=0

    salida = output_y(x,w,b) 
    print("Salida: ", salida)

    #Error residual en la red neuronal
    residual = y-salida
    print("Error: ", residual)

    #Calcular incremento de los pesos
    incremento = [increment(w,x,b,learning_rate,0,y),increment(w,x,b,learning_rate,0,y)] 
    print('Incremento: ', incremento)

    #Calcular el nuevo valor de los pesos 
    n_w = w + incremento
    print('Nuevos pesos: ', n_w)

    #calcular el nuevo error, esperamos que sea menor
    new_error = y - output_y(x,n_w,b)
    print('Nuevo error: ', new_error )

    if (new_error >= residual):
        print('falla de red neuronal')
    else:
        print('red neuronal funcionando')



if __name__ == "__main__":
    main()   


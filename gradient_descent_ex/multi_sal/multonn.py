import numpy as np

class Multonn():
    def __init__(self,x,w,b,y,eta):
        self.x=x
        self.w=w
        self.b=b
        self.eta = eta
        self.y = y

    def sigmoid(self,h):
        return 1/(1 + np.exp(-h))
    
    def output_y(self):
        return self.sigmoid(self.vect_func_h(self))
    
    def sigmoid_prime(self,h):
        return self.sigmoid(h)*(1 -self.sigmoid(h))
    
    
    def vect_func_h(self):
        return np.dot(self.x,self.w) + self.b
    def error_term(self):
        error = (self.y-self.output_y(self.x,self.w,self.b))
        delta = error *self.sigmoid_prime(self.vect_func_h(self.x,self.w,self.b))
        return delta

    #eta es la tasa de aprendizaje
    def increment(self,i):
        incremento = self.eta* self.error_term(self.y,self.w,self.x,self.b)*self.x[i]
        return incremento
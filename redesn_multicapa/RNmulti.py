import numpy as np

class Neural():
    def __init__(self, x,w,b,eta,y):
        self.x = x
        self.w= w
        self.b = b
        self.eta = eta
        self.y = y
    
    def sigmoid(self,h):
        return 1/(1 + np.exp(-h))
    
    def tanh(self,h):
        return (np.exp(h)-np.exp(-h))/(np.exp(h)+np.exp(-h))
    
    def vect_func_h(self):
        return np.dot(self.x,self.w) + self.b
    
    def output_sigmoid_a(self):
        return self.sigmoid(self.vect_func_h())
    def output_tanh_a(self):
        return self.tanh(self.vect_func_h())
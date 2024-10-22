import numpy as np
import matplotlib.pyplot as plt

def main():
        #Vector de tiempo
        t = np.linspace(0,1.0,2001)

        #formación de señales senoidales
        
        sin_50Hz = np.sin(2*np.pi*50*t)
        sin_600Hz = np.sin(2*np.pi*600*t)
        
        plt.plot(t[:500],sin_50Hz[:500])
        plt.plot(t[:500],sin_600Hz[:500])
        




if __name__ == '__main__':
    main()
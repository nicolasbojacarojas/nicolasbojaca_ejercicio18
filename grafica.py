import numpy as np
import matplotlib.pyplot as plt
x = np.loadtxt("datos.txt")
xi = x[:,0]
yi = x[:,1]
plt.scatter(xi, yi)
plt.savefig("grafica")

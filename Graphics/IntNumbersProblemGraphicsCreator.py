import matplotlib.pyplot as plt

data = ([788, 778, 784, 800, 799,789.8],["C1","C2","C3","C4","C5","Promedio"])

fig, ax = plt.subplots(figsize=(4,6))

ax.bar(data[1],data[0],color="g",label="Creador de enteros")
ax.set_yticks([500,600,700,790])
ax.grid(True,"both","y")
ax.set_xlabel("Compilaciones")

data = ([738, 734, 728, 734, 734,733],["C1","C2","C3","C4","C5","Promedio"])
ax.bar(data[1],data[0],color="r",alpha=0.60,label="Verificador de enteros")

plt.subplots_adjust(left=0.180,bottom=0.55,top=0.790)
plt.legend(loc='lower center')

plt.savefig("./img/MakerAndVerifier.png")

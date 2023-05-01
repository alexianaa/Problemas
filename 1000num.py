lista = []
for i in range(1000):
    a = int(input())
    lista.append(a)

numEscolhido = int(input())
vezes = lista.count(numEscolhido)
print(numEscolhido,"aparece",vezes,"vezes")

num = int(input())
lista = []
while num != -1:
    lista.append(num)
    for i in range(999):
        a = int(input())
        lista.append(a)
    numEscolhido = int(input())
    vezes = lista.count(numEscolhido)
    print(numEscolhido,"aparece",vezes,"vezes")
    lista = []
    num = int(input())

#Firma
MARCA = "Hecho por Delgado Ugarte Mateo"

#Solicitud de cantidad de alumnos
cantidadAlumnos = int(input("Ingrese la cantidad de alumnos que rindieron: "))

#Variables
aprobado = None
i = 0
listaAprobados = []
listaGeneral = []
listaNotas = []

#Solicitud de datos de cada alumno
while (i<cantidadAlumnos):
    alumno = input("ingrese el apellido del alumno: ")
    notaUno = int(input("Nota ejercicio 1: "))
    notaDos = int(input("Nota ejercicio 2: "))
    notaTres = int(input("Nota ejercicio 3: "))
    notaCuatro = int(input("Nota ejercicio 4: "))
    
    #Validación con un superIF
    if(notaCuatro>10 or notaCuatro<0
    or notaTres>10 or notaTres<0
    or notaDos>10 or notaDos<0 or
    notaUno>10 or notaUno<0):
        print("Alguna de las notas es incorrecta, vuelva a introducirlas...")
        
    else:
        notaTotal = (notaUno + notaDos + notaTres + notaCuatro)/4
        float(notaTotal)
        
        if notaTotal >= 6:
            aprobado = True
        else:
            aprobado = False
            
        if aprobado:
            listaAprobados.insert(i, alumno)
            listaNotas.insert(i, notaTotal)
            listaGeneral.insert(i, alumno)
        else:
            listaGeneral.insert(i, alumno)
            listaNotas.insert(i, notaTotal)
        i +=1
    
print("\n")
print("Lista de aprobados: ")

x = 0
while(x<len(listaAprobados)):
    print(listaAprobados[x], ": ", listaNotas[x])
    x+=1

print("\n")
print("Lista de alumnos que rindieron: ")

y = 0
while(y<len(listaGeneral)):
    print(listaGeneral[y], ": ", listaNotas[y])
    y+=1
    
print("\n", MARCA)

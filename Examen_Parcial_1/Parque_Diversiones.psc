Algoritmo Parque_Diversiones
	
    Definir edad, tipo_pase Como Entero
    Definir precio_final Como Real
    
    Escribir "Ingresa la edad del visitante: "
    Leer edad
    Escribir "Tipo de pase (1 = Basico, 2 = Plus): "
    Leer tipo_pase
    
    Escribir "" // Salto de linea por estética
    
    // Evaluamos la categoría y calculamos el precio de una vez
    Si edad < 4 Entonces
        Escribir "Categoria del visitante: Infante"
        precio_final <- 0
    SiNo
        Si edad >= 4 Y edad <= 12 Entonces
            Escribir "Categoria del visitante: Niño"
            precio_final <- 300
            // Sumamos el extra si es pase Plus
            Si tipo_pase = 2 Entonces
                precio_final <- precio_final + 100
            FinSi
        SiNo
            Si edad >= 13 Y edad <= 64 Entonces
                Escribir "Categoria del visitante: Adulto"
                precio_final <- 500
                Si tipo_pase = 2 Entonces
                    precio_final <- precio_final + 150
                FinSi
            SiNo
                // Si no cayó en ninguna anterior, por descarte es 65 o más
                Escribir "Categoria del visitante: Senior"
                // El básico de Senior es 50% del básico de adulto (500 / 2 = 250)
                precio_final <- 250
                Si tipo_pase = 2 Entonces
                    precio_final <- precio_final + 100
                FinSi
            FinSi
        FinSi
    FinSi
    
    Escribir "Precio final a pagar: $", precio_final
	
FinAlgoritmo
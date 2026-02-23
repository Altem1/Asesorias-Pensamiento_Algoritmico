Algoritmo Situacion_Academica
    
    Definir prom_final Como Real
    Definir porcentaje, cod_prom, cod_asis Como Entero
    
    Escribir "Promedio final: " 
    Leer prom_final
    Escribir "Porcentaje de asistencia: "
    Leer porcentaje
    
    Escribir ""

    Si prom_final >= 90 Entonces
        cod_prom <- 1 
        Escribir "Estatus promedio: Excelente"
    SiNo
        Si prom_final >= 80 Entonces
            cod_prom <- 2
            Escribir "Estatus promedio: Bueno"
        SiNo
            Si prom_final >= 70 Entonces
                cod_prom <- 3
                Escribir "Estatus promedio: Regular"
            SiNo
                cod_prom <- 4
                Escribir "Estatus promedio: Reprobado"
            FinSi
        FinSi
    FinSi

    Si porcentaje >= 90 Entonces
        cod_asis <- 1
        Escribir "Estatus asistencia: Alta"
    SiNo
        Si porcentaje >= 75 Entonces
            cod_asis <- 2
            Escribir "Estatus asistencia: Media"
        SiNo
            cod_asis <- 3
            Escribir "Estatus asistencia: Baja"
        FinSi
    FinSi

    Si cod_prom = 4 O cod_asis = 3 Entonces
        Escribir "Situacion final: No acreditado"
    SiNo
        Si (cod_prom = 1 O cod_prom = 2) Y cod_asis = 1 Entonces
            Escribir "Situacion final: Aprobado con merito"
        SiNo
            Escribir "Situacion final: Aprobado" 
        FinSi
    FinSi
    
FinAlgoritmo
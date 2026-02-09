Algoritmo Identificador_Letras
	Definir X Como Caracter; 
	
	Leer X; 
	
	Si (X >= "A") Y (X <= "M") 
		
		Escribir "1"; 
		
		SiNo Si (X >= "N") Y (X <= "Z") 
			
			Escribir "2"; 
			
			SiNo 
			
				Escribir "0"; 
		FinSi
	FinSi
FinAlgoritmo

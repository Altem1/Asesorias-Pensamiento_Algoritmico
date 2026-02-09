Algoritmo Transportar_Sandias
	Definir  largo, ancho, profundidad, lado, suspension, pesoSandia, capacidadSandias, cantidadSandias Como Entero; 
	
	Escribir "Ingresar dimensiones de la camioneta"; 
	
	Leer largo; 
	
	Leer ancho; 
	
	Leer profundidad; 
	
	Escribir "Ingresar largo de la sandía"; 
	
	Leer lado; 
	
	capacidadSandias = (largo*ancho*profundidad)/(lado*lado*lado); 
	
	Escribir "Ingresar carga máxima de la camioneta"; 
	
	Leer suspension; 
	
	Escribir "Ingresar peso individual de la sandía"; 
	
	Leer pesoSandia; 
	
	Escribir "Ingresar número de sandías cosechadas"; 
	
	Leer cantidadSandias; 
	
	Si capacidadSandias < cantidadSandias 
		
		Escribir "Las sandías no caben todas en la camioneta"; 
		
	SiNo Si (cantidadSandias*pesoSandia) > suspension 
			
			Escribir "Las sandías pesan mucho para llevarlas todas"; 
			
		SiNo  
			
			Escribir "Don Paco puede llevar todas las sandías."; 
			
			Escribir "Caben ", capacidadSandias, " sandías."; 
			
			Escribir "Puede cargar ", suspension/pesoSandia, " sandías"; 
		FinSi
	FinSi
FinAlgoritmo

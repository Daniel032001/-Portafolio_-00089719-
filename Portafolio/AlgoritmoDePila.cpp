//JOSE DANIEL MAURICIO GUERRERO 00089719]
//PRIMER ALGORITMO

"Algoritmo: validación de paréntesis en una expresión usando una pila"
    int sacar2doelto(stack s){
    	if(empty(s))
    		return -1
    	i = pop(s)
    	if(empty(s))
    		return -1
    	i = pop(s)
    	return i
    }
    
//SEGUNDO ALGORITMO    
    
    "Algoritmo: validación de paréntesis en una expresión usando una pila"
    int sacar2doelto(stack s){
    	if(empty(s))
    		return -1
    	arr = pop(s)
    	if(empty(s))
    		return -1
    	seg = pop(s)
    	push(s, seg)
    	push(s, arr)
    	return seg
    }
int MayorDosNumeros(int n1,int n2){
	int mayor;
	if(n1<n2){
		mayor=n2;
	}
	else{
		mayor=n1;
	}
	
	return mayor;

}
	int compararCuatroNumeros(int n1,int n2 ,int n3, int n4){
		int primer_mayor = Mayor(n1,n2);//5
		int mayor_segundo=Mayor(primer_mayor,n3);//8
		int mayor_definitivo =Mayor(mayor_segundo,n4);
		return mayor_definitivo;
	}
	
	
	int main(){
		int num1=5,num2=2,num3=8,num4=3;
		cout<<compararCuatroNumeros(num1,num2,num3,num4);
		
	
	}
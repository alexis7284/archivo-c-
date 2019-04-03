#include <iostream>

using namespace std;

int Refresco[2];
int Galleta[2];
int Leche[2];

void productos(int tipo);
void refresco();
void galleta();
void leche();
void vender();


int main()
{
	cout<<"Ingrese las cantidades de los productos antes de vender"<<endl;
	int tipo;
	cout<<"Refrescos"<<endl;
	tipo=1;
	productos(tipo);
	refresco();
	
	cout<<"Galletas"<<endl;
	tipo=2;
	productos(tipo);
	galleta();
	
	cout<<"Leche"<<endl;
	tipo=3;
	productos(tipo);
	leche();
	system("cls");
	
	vender();
	
	
	
}

void productos(int tipo)
{
	cout<<"Cantidad en existencia de: "<<endl;
	if (tipo==1)
	{
		cout<<"1.- Coca cola "<<Refresco[0]<<endl;
		cout<<"2.- Pepsi "<<Refresco[1]<<endl;
		cout<<"3.- Peñafiel "<<Refresco[2]<<endl;
	}
	
	if(tipo==2)
	{
		cout<<"1.- Arcoiris "<<Galleta[0]<<endl;
		cout<<"2.- Emperador "<<Galleta[1]<<endl;
		cout<<"3.- Marias "<<Galleta[2]<<endl;
	}
	
	if (tipo==3)
	{
		cout<<"1.- Lala "<<Leche[0]<<endl;
		cout<<"2.- Pradel "<<Leche[1]<<endl;
		cout<<"3.- Santa Clara "<<Leche[2]<<endl;
	}
}

void refresco()
{
	
	cout<<"Ingrese la cantidad de cada producto deacuerdo a su orden"<<endl;
	
	for (int i=0; i<=2; i++)
	{
		cin>>Refresco[i];
		while ( Refresco[i] <0)
		{
			cout<<"Cantidad negativa, Ingrese una cantidad positiva: "<<endl;
			cin>>Refresco[i];
		}
	}	
}

void galleta()
{
	
	cout<<"Ingrese la cantidad de cada producto deacuerdo a su orden"<<endl;
	
	for (int i=0; i<=2; i++)
	{
		cin>>Galleta[i];
		while ( Galleta[i] <0)
		{
			cout<<"Cantidad negativa, Ingrese una cantidad positiva: "<<endl;
			cin>>Galleta[i];
		}	
}
}

void leche()
{
	
	cout<<"Ingrese la cantidad de cada producto deacuerdo a su orden"<<endl;
	
	for (int i=0; i<=2; i++)
	{
		cin>>Leche[i];
		while ( Leche[i] <0)
		{
			cout<<"Cantidad negativa, Ingrese una cantidad positiva: "<<endl;
			cin>>Leche[i];
		}	
}
}
void vender()
{
	int tipo,i,Cantidad,final;
	int TipoProducto;
		cout<<"-------------------------------Bienvenido-------------------------------"<<endl;
		cout<<"Ingrese el numero del tipo de producto a comprar: "<<endl;
		cout<<"1.-Refresco"<<endl;
		cout<<"2.-Galleta"<<endl;
		cout<<"3.-Leche"<<endl;
		cin>>tipo;
		while (tipo<1 || tipo>3)
		{
			cout<<"Ingrese una opcion correcta"<<endl;
			cin>>tipo;
		}
		system("cls");
		productos(tipo);
		cout<<"Ingrese el numero del producto a comprar"<<endl;
		cin>>TipoProducto;
		while (TipoProducto<1 || TipoProducto>3)
		{
			cout<<"Ingrese una opcion correcta"<<endl;
			cin>>TipoProducto;
		}
		
			if(tipo==1)
			{
				for (i=TipoProducto; i=TipoProducto; i++)
			{
				cout<<"Ingrese la cantidad a comprar: "<<endl;
				cin>>Cantidad;
				while (Cantidad<0)
					{
						cout<<"Ingrese una cantidad correcta"<<endl;
						cin>>Cantidad;
					}
				if (Cantidad>Refresco[i])
				{
					cout<<"Cantidad a coprar mayor a la cantidad existente no se puede realizar la compra"<<endl;
				}
				else 
				{
					Refresco[i]-=Cantidad;
					cout<<Refresco[i];
				}
			}
				}
			
			if(tipo==2)
			{
				for (i=TipoProducto; i<=TipoProducto; i++)
			{
				cout<<"Ingrese la cantidad a comprar: "<<endl;
				cin>>Cantidad;
				while (Cantidad<0)
					{
						cout<<"Ingrese una cantidad correcta"<<endl;
						cin>>Cantidad;
					}
				if (Cantidad>Galleta[i])
				{
					cout<<"Cantidad a coprar mayor a la cantidad existente no se puede realizar la compra"<<endl;
				}
				else 
				{
					Galleta[i]-=Cantidad;
					cout<<Galleta[i];
				}
			}
			}
			
			if(tipo==3)
			{
				for (i=TipoProducto; i<=TipoProducto; i++)
			{
				cout<<"Ingrese la cantidad a comprar: "<<endl;
				cin>>Cantidad;
				while (Cantidad<0)
					{
						cout<<"Ingrese una cantidad correcta"<<endl;
						cin>>Cantidad;
					}
				if (Cantidad>Leche[i])
				{
					cout<<"Cantidad a coprar mayor a la cantidad existente no se puede realizar la compra"<<endl;
				}
				else 
				{
					Leche[i]-=Cantidad;
					cout<<Leche[i];
				}
			}
			}
			
			system("cls");
			productos(tipo);

			
			for (i=0; i<3; i++)
			{
				Refresco[i];
				if(Refresco[i]==0)
				{
					final+=1;
				}
			}
			
			for (i=0; i<3; i++)
			{
				Galleta[i];
				if(Galleta[i]==0)
				{
					final+=1;
				}
			}
			
			for (i=0; i<3; i++)
			{
				Leche[i];
				if(Leche[i]==0)
				{
					final+=1;
				}
			}
			
		
}

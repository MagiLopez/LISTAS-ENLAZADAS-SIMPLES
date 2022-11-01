//MENU PRINCIPAL
#include<iostream>
#include<windows.h>
#include <conio.h>
using namespace std;



int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}
//*****  LISTAS  ******
struct nodos {//p1
	int Refe_Medicamento;
	char Nom_Medicamento[70];
	char Presentacion[70];
	int Cant_existente;
	int maxima;
	int minima;
	nodos *sig;
}*p, *q, *r,*cabeza;

struct Nodo2{//p2
	int Numero2;
	Nodo2 *sig;
} *cabeza2, *p2, *q2 , *r2;

struct Nodo3{
	int Nume3;
	Nodo3 *sig;
} *cab3, *p3, *q3 , *r3, *POS;

struct Universidad{//p4
	int id;
	char nombre[30];
	Universidad *sig;
} *cab4,*p4, *q4;

struct Nodo5{//P5
	int cc;
	char nom[30];
	float pago;
	float descuento;
	 
	Nodo5 *sig5;
}*cab5,*p5, *q5, *r5;

struct Nodo52{//P51
	int cc;
	int horas;
	float valor;
	
	Nodo52 *sig52;
}*cab52,*p52, *q52, *r52;

struct Nodo6{//p6
	int Nume;
	Nodo6 *sig6;
} *cab1, *p6, *q6 , *r6;

struct Nodo61{//p61
	int Nume1;
	Nodo61 *sig61;
} *cab2, *p61, *q61 , *r61;

struct L1{//p7
	int codigo;
	L1 *sig7;
}*cab17, *p7, *q7;

struct L2{//p71
	int codigo;
	char Accion;
	L2 *sig71;
} *cab27, *p71, *q71;




//***** -- DECLARAR FUNCIONES  ***********

void PUNTO1(),PUNTO2(),PUNTO3(),PUNTO4(),PUNTO5(),PUNTO6(),PUNTO7();
void Registro(),actualizar(),G_inventario(),inform(),consult(),borrar(),registro4(),mostrar();
void registro5(),inform5(),actualizar5(),registro52();
void registro6(),registro61(),inform6(),retirar6(),borrar(Nodo6 *p6);
void registroL1(),registroL2(),inform7(),rep7(),borrar7(L1 *p7),borrar3(Nodo3 *p3);

//***** -- DECLARA VARIABLES  **********
char MEN,opc,AC,enc,OP;
int Selec, ref,Menu,cont,Opcion,f,secc,cc,cod7;

main(){
	MEN='S';
	while(MEN=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** LISTAS ENLAZADAS SIMPLES***";
		gotoxy(34,4);cout<<"1. PUNTO 1";
		gotoxy(34,5);cout<<"2. PUNTO 2";
		gotoxy(34,6);cout<<"3. PUNTO 3";
		gotoxy(34,7);cout<<"4. PUNTO 4";
		gotoxy(34,8);cout<<"5. PUNTO 5";
		gotoxy(34,9);cout<<"6. PUNTO 6";
		gotoxy(34,10);cout<<"7. PUNTO 7";
		gotoxy(34,11);cout<<"8. SALIR";
		
		gotoxy(32,13);cout<<" DIGITE OPCION:"; cin>>Menu;
		switch(Menu){
			case 1:PUNTO1();break;
			case 2:PUNTO2();break;
			case 3:PUNTO3();break;
			case 4:PUNTO4();break;
			case 5:PUNTO5();break;
			case 6:PUNTO6();break;
			case 7:PUNTO7();break;
			case 8:MEN='N';break;
		}
		
	}
}

//***************** P1 **********************
void PUNTO1(){
	OP='S';
while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 1 ***";
		gotoxy(22,3);cout<<"DROGUERIA LA SALUD";
		gotoxy(20,5);cout<<"1. REGISTO INFORMACIONM";
		gotoxy(20,6);cout<<"2. GESTION DE INVENTARIO";
		gotoxy(20,7);cout<<"3. VOLVER AL MENU PRINCIPAL";
		do {
			gotoxy(20,9);cout<<"DIGITE OPCION: ";cin>>Selec;
		} while(Selec<1&&Selec>3);
		
		switch (Selec){
			case 1: Registro();
				break;
			case 2:G_inventario();
				break;
			case 3:OP='N';
				break; 
		}
		
	}	
	
}
void Registro(){
	system("cls");
	opc='S';
	while(opc=='S'){
		system("cls");
		nodos *p = new nodos();
		if(p ==NULL){
			cout<<" NO HAY MEMORIA DISPONIBLE";
		}
		else{
			
			gotoxy(25,2);cout<<" REGISTRO ";
			gotoxy(20,4);cout<<" REFERENCIA ";cin>>p->Refe_Medicamento;
			cin.sync();
			gotoxy(20,5);cout<<" NOMBRE ";gets(p->Nom_Medicamento);
			cin.sync();
			gotoxy(20,6);cout<<" PRESENTACION ";gets(p->Presentacion);
			cin.sync();
			gotoxy(20,7);cout<<" UNIDADES ";cin>>p->Cant_existente;
			gotoxy(20,8);cout<<" CANTIDAD MAXIMA PARA ALMACENAR ";cin>>p->maxima;
			gotoxy(20,9);cout<<" CANTIDAD MINIMA PARA ALMACENAR ";cin>>p->minima;
			
			p->sig=NULL;
		  if(cabeza==NULL){
			cabeza=p;
		   }
		   else{
				r=cabeza;
			
				while(r->sig != NULL){
					r=r->sig;
				}
			 r->sig=p;
			}
		}
		do {
			gotoxy(20,11);cout<<"DESEA REGISTAR OTRO MEDICAMENTO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
		
	}
}
void G_inventario(){
	int Opcion2;
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"GESTION DE INVENTARIO";
		gotoxy(20,4);cout<<"1.ACTUALIZAR INFORMACION";
		gotoxy(20,5);cout<<"2.BORRAR REGISTRO DE INVENTARIO";
		gotoxy(20,6);cout<<"3.CONSULTAR INFORMACION";
		gotoxy(20,7);cout<<"4.INFORE DE INVENTARIO";
		gotoxy(20,8);cout<<"5. VOLVER AL MENU";
		do {
			gotoxy(20,10);cout<<"DIGITE OPCION: ";cin>>Opcion2;
		} while(Selec<1&&Selec>5);
		
	    switch(Opcion2){
	 	  case 1:actualizar();
	 		  break;
	 	  case 2:borrar();
	 		  break;  
	   	  case 3:consult();
	 		 break;
	 	  case 4:inform();
	 		break;
	 	  case 5:opc='N';
	 		break;
	 	}
	}
}
void actualizar(){
	AC='S';
	
	while(AC=='S'){
	
		system("cls");
		
		if (cabeza==NULL){
			gotoxy(37,3);cout<<"LISTA VACIA";
		}
		else{
			gotoxy(20,3);cout<<"DIGITE LA REFERENCIA: ";cin>>ref;
			p=cabeza; enc='N';
			while (enc=='N'&& p != NULL){
				if (p->Refe_Medicamento==ref){
					enc='S';
					gotoxy(20,5);cout<<" NOMBRE ";cin>>p->Nom_Medicamento;
					gotoxy(20,6);cout<<" PRESENTACION ";cin>>p->Presentacion;
					gotoxy(20,7);cout<<" UNIDADES ";cin>>p->Cant_existente;
					gotoxy(20,8);cout<<" CANTIDAD MAXIMA PAR ALMACENAR ";cin>>p->maxima;
					gotoxy(20,9);cout<<" CANTIDAD MINIMA PAR ALMACENAR ";cin>>p->minima;
				}
				else{
					p=p->sig;
				}
			}
		}
		
		if (enc=='N'){
			gotoxy(20,5);cout<<"NO SE ENCUETRA";
		}
		do {
			gotoxy(20,11);cout<<" DESEA ACTUALIZAR OTRO MEDICAMENTO S/N ";cin>>AC;
			AC=toupper(AC);	
		} while(AC!='S'&&AC!='N');
		
		
	}
	
}
void inform(){
	int f=3;
	system("cls");
	gotoxy(40,1);cout<<"INFORME";
	if (cabeza==NULL){
		gotoxy(37,3);cout<<"LISTA VACIA";
	}
	else{
		p=cabeza;
		system("cls");
		while(p != NULL){
			gotoxy(5,2);cout<<"REFERENCIA       NOMBRE           PRESENTACION       UNIDADES     MAXIMA   MINIMA";
			gotoxy(5,f);cout<<p->Refe_Medicamento;
			gotoxy(22,f);cout<<p->Nom_Medicamento;
			gotoxy(39,f);cout<<p->Presentacion;
			gotoxy(58,f);cout<<p->Cant_existente;
			gotoxy(71,f);cout<<p->maxima;
			gotoxy(80,f);cout<<p->minima;
			
			p=p->sig;
			f++;
		}	
	}
	gotoxy(34,f+2);cout<<"ENTER PARA VOLVER";
	getch();
}
void borrar(){
AC='S';
while(AC=='S'){
	system("cls");
	gotoxy(25,2);cout<<"BORRAR ";
	gotoxy(20,3);cout<<"DIGITE LA REFERENCIA";cin>>ref;
	
	if(cabeza==NULL){
		gotoxy(25,5);cout<<"LISTA VACIA";	
	}
	else{
		p=cabeza; enc='N';
		while (enc=='N'&& p != NULL){
			if (p->Refe_Medicamento==ref){
				enc='S';
			}
			else{
				p=p->sig;
			}
		}
		if(enc=='N'){
			gotoxy(20,5);cout<<"NO SE ENCUENTA EN LA LISTA";
		}	
		else{
			//*****************
			if (p==cabeza){//ESTA EN EL PRIMER
					cabeza =cabeza->sig;
					delete(p);
					gotoxy(20,5);cout<<"BORRADO";
			}
			//*****************
			else{
				if (p->sig==NULL){//SI ESTA DE ULTIMO
				q=cabeza;
				while(q->sig!=p){
					q=q->sig;
				}
				q->sig=p->sig;
				delete(p);
				gotoxy(20,5);cout<<"BORRADO";
				}
				//*****************
				else{	//esta intermedio		
					q=cabeza;
					while(q->sig!=p){
						q=q->sig;
					}
					q->sig=p->sig;
					delete(p);
					gotoxy(20,5);cout<<"BORRADO";		
				   }
	   	   }
	   }	
   }
	do {
		gotoxy(20,7);cout<<"DESEA BORRAR OTRO: ";cin>>AC;
		AC=toupper(AC);	
		} while(AC!='S'&&AC!='N');	
		
   }	
	
}
void consult(){
		
	AC='S';
	while(AC=='S'){
		system("cls");
		gotoxy(24,2);cout<<"CONSULTAR";
		gotoxy(20,4);cout<<"REFERENCIA: ";cin>>ref;
		p=cabeza;cont=0;enc='N';
		while (enc=='N' && p != NULL){
			cont++;
			if (p->Refe_Medicamento==ref){
				enc='S';
				gotoxy(20,6);cout<<"SE ENCONTRO EN LA POSISICION: "<<cont;
			}
			else{
				p=p->sig;
			}
		}
		if (enc=='N'){
			gotoxy(22,6);cout<<"NO ESTA EN LA LISTA";
		}
		do {
			gotoxy(20,8);cout<<"DESEA CONSUTAR OTRO S/N: ";cin>>AC;
			AC=toupper(AC);	
		} while(AC!='S'&&AC!='N');	
		
	
	} 
}

//******************* P2 ***********************
void PUNTO2(){
	OP='S';
while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 2 ***";
		gotoxy(20,4);cout<<"1. REGISTRAR ";
		gotoxy(20,5);cout<<"2. INFORME";
		gotoxy(20,6);cout<<"3. RETIRAR";
		gotoxy(20,7);cout<<"4. VOLVER AL MENU PRINCIPAL";
		do {
			gotoxy(21,9);cout<<" DIGITE OPCION:"; cin>>Opcion;
		} while(Opcion<1&&Opcion>4);
	
	switch (Opcion){
		case 1:
			opc='S';
			while(opc=='S'){
				system("cls");
				gotoxy(23,2);cout<<"*-- REGISTRO --*";
				Nodo2 *p2 = new Nodo2();
				if(p2==NULL){
					gotoxy(20,4);cout<<"NO HAY MEMORIA DISPONIBLE";
				}
				else {
					gotoxy(20,4);cout<<"NUMERO: ";cin>>p2->Numero2;
					
					p2->sig=NULL;
					if(cabeza2==NULL){
						cabeza2=p2;
					}
					else{
						q2=cabeza2;
						while(q2->sig != NULL){
							q2=q2->sig;
						}
					  q2->sig=p2;
					}	
				}
				 do {
					gotoxy(19,6);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
				} while(opc!='S'&&opc!='N');
			}

		break ;
			
	   case 2://informe
	   		f=4;
			system("cls");
			gotoxy(28,2);cout<<"*--INFORME--*";
			if (cabeza2==NULL){
				gotoxy(25,4);cout<<"LISTA VACIA\n";
			}
			else{
				p2=cabeza2;
				
				gotoxy(30,3);cout<<"NUMEROS";
				while(p2 != NULL){
					gotoxy(32,f);cout<<p2->Numero2<<endl;
					f++,
					p2=p2->sig;
				}
			}
			gotoxy(26,f+2);cout<<"ENTER PARA VOLVER";
			getch();
		break;
			case 3://borrador
			opc='S';
			
			int num;
			while(opc=='S'){
				system("cls");
				gotoxy(23,2);cout<<"*- BORRAR -*";
				gotoxy(20,4);cout<<"DIGITE LA REFERENCIA";cin>>num;
				
				if(cabeza2==NULL){
					gotoxy(22,6);cout<<"LISTA VACIA";	
				}
				else{
					p2=cabeza2; enc='N';
					while (enc=='N'&& p2 != NULL){
						if (p2->Numero2==num){
							enc='S';
						}
						else{
							p2=p2->sig;
						}
					}
					if(enc=='N'){
						gotoxy(18,4);cout<<"NO SE ENCUENTA EN LA LISTA";
					}	
					else{
						//*****************
						if (p2==cabeza2){//ESTA EN EL PRIMER
								cabeza2 =cabeza2->sig;
								delete(p2);
								gotoxy(22,6);cout<<"BORRADO";
						}
						//*****************
						else{
							if (p2->sig==NULL){//SI ESTA DE ULTIMO
							q2=cabeza2;
							while(q2->sig!=p2){
								q2=q2->sig;
							}
							q2->sig=p2->sig;
							delete(p2);
							gotoxy(22,6);cout<<"BORRADO";
							}
							//*****************
							else{	//esta intermedio		
								q2=cabeza2;
								while(q2->sig!=p2){
									q2=q2->sig;
								}
								q2->sig=p2->sig;
								delete(p2);
								gotoxy(22,6);cout<<"BORRADO";		
							   }
				   	   }
				   }	
			   }
				do {
					gotoxy(20,8);cout<<"DESEA BORRAR OTRO: ";cin>>opc;
					opc=toupper(opc);	
					} while(opc!='S'&&opc!='N');		
			   }	
			break;
			
		case 4: OP='N';break;
}
}	

}

//********************** P3 **************************
void PUNTO3(){
	OP='S';
while(OP=='S'){
	system("cls");
	gotoxy(23,2);cout<<"*** PUNTO 3 ***";
	gotoxy(20,4);cout<<"1. REGISTRAR";
	gotoxy(20,5);cout<<"2. BORRAR REPETIDOS";
	gotoxy(20,6);cout<<"3. INFORME";
	gotoxy(20,7);cout<<"4. VOLVER AL MENU PRINCIPAL";
	do {
		gotoxy(21,9);cout<<" DIGITE OPCION:"; cin>>secc;
	} while(secc<1&&secc>4);
	
	switch (secc){
		case 1:
			opc='S';
			while(opc=='S'){
				system("cls");
				gotoxy(23,2);cout<<"*-REGISTRO-*";
				Nodo3 *p3 = new Nodo3();
				if(p3==NULL){
					gotoxy(18,4);cout<<"NO HAY MEMORIA DISPONIBLE";
				}
				else {
					gotoxy(21,4);cout<<"NUMERO: ";cin>>p3->Nume3;
					
					p3->sig=NULL;
					if(cab3==NULL){
						cab3=p3;
					}
					else{
						q3=cab3;
						while(q3->sig != NULL){
							q3=q3->sig;
						}
					  q3->sig=p3;
					}	
				}
			 	do {
					gotoxy(19,7);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
				} while(opc!='S'&&opc!='N');
			}
		break ;
			
		case 2://borrar repetidos
		if(cab3==NULL){
		cout<<"\nNO HAY LISTA";
		}
		else{
			char Sm='S';
			while(Sm=='S'){
				p3=cab3;char enc='N';
				while(p3!=NULL){//RECORRE P 
					
					q3=p3->sig;
					while(q3!=NULL){//RECORRE Q
					
						if(p3->Nume3==q3->Nume3){
							POS=q3;
							q3=q3->sig;	
							borrar3(&*POS);
						}
						else{
							q3=q3->sig;	
						}		
					} 
					p3=p3->sig;					
				}
				Sm='n';
			}	
		}
		gotoxy(23,12);cout<<"** BORRADOS **";
		getch();
		break;
	
	
	   case 3://informe
			system("cls");
			gotoxy(28,2);cout<<"*--INFORME--*";
			if (cab3==NULL){
				gotoxy(28,4);cout<<" LISTA VACIA ";
			}
			else{
				p3=cab3;
				f=4;
				gotoxy(30,3);cout<<"NUMEROS";
				while(p3 != NULL){
					gotoxy(32,f);cout<<p3->Nume3;
					f++;
					p3=p3->sig;
				}
			}
			gotoxy(27,f+2);cout<<"ENTER PARA VOLVER";
			getch();
		break;
		case 4:	OP='N';	break;
			
		
	}
}


	
}
void borrar3(Nodo3 *POS){
	
if(cab3==NULL){
	cout<<"LISTA VACIA";	
}
else{	
		//*****************
		if (POS==cab3){//ESTA EN EL PRIMER
				cab3 =cab3->sig;
				delete(POS);
		}
		//*****************
		else{
			if (POS->sig==NULL){//SI ESTA DE ULTIMO
			q3=cab3;
			while(q3->sig!=POS){
				q3=q3->sig;
			}
			q3->sig=POS->sig;
			delete(POS);
			}
			//*****************
			else{	//esta intermedio		
				q3=cab3;
				while(q3->sig!=POS){
					q3=q3->sig;
				}
				q3->sig=POS->sig;
				delete(POS);	
			   }
   	   }
   }	
   }

//******************** P4 ***********************
void PUNTO4(){
	OP='S';
	while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 4 ***";
		gotoxy(20,4);cout<<"1. REGISTRAR ";
		gotoxy(20,5);cout<<"2. INFORME";
		gotoxy(20,6);cout<<"3. VOLVER AL MENU PRINCIPAL";
		do {
			gotoxy(21,8);cout<<" DIGITE OPCION:"; cin>>secc;
		} while(secc<1&&secc>3);
		switch (secc){
			case 1:registro4();break;
			case 2:mostrar();break;
			case 3:OP='N'; break;	
		}
	}
	
}
void registro4(){
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*- REGISTRO -*";
		gotoxy(20,4);cout<<"CEDULA: ";cin>>cc;
		if(cab4==NULL){
			enc='N';
		}
		else{
			q4=cab4;enc='N';
			while(q4 !=NULL && enc=='N'){
				if(q4->id==cc){
					enc='S';
				}
				q4=q4->sig;
			}	
		}
		
		if(enc=='S'){
			gotoxy(20,6);cout<<"ALUMNO YA ESTA MATRICULADO";
		}
		else{
			Universidad *p4 = new Universidad();
			if(p4==NULL){
				gotoxy(20,6);cout<<"NO HAY ESPACIO DISPONIBLE";
			}
			else{
				p4->id=cc;
				cin.sync();
				gotoxy(20,5);cout<<"NOMBRE: ";gets(p4->nombre);
				p4->sig=NULL;
				if(cab4==NULL){
					cab4=p4;
				}
				else{
					q4=cab4;
					while(q4->sig  != NULL){
						q4=q4->sig;
					}
					q4->sig=p4;
				}
			}
		}
		
		do {
			gotoxy(18,8);cout<<"DESEA REGISTAR OTRO ESTUDIANTE s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
		}

}
void mostrar(){
	system("cls");
	gotoxy(28,2);cout<<"*--INFORME UNI--*";
	if(cab4==NULL){
		gotoxy(25,4);cout<<"LISTA VACIA\n";
	}
	else{
		f=4;
		p4=cab4;
		gotoxy(28,3);cout<<"CEDULA           NOMBRE";
		while(p4 != NULL){
			gotoxy(28,f);cout<<p4->id;
			gotoxy(45,f);cout<<p4->nombre<<endl;
			f++;
			p4=p4->sig;
		}
	}
	gotoxy(29,f+2);cout<<"ENTER PARA VOLVER";
	getch();
}

//******************** P5 *********************
void PUNTO5(){
	OP='S';
	while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 5 ***";
		gotoxy(16,3);cout<<"-- SALARIO TRABAJADORES --";
		gotoxy(20,5);cout<<"1.REGISTRO lista 1";
		gotoxy(20,6);cout<<"2.REGISTRO lista 2";
		gotoxy(20,7);cout<<"3.ACTUALIZAR ";
		gotoxy(20,8);cout<<"4.INFORME ";
		gotoxy(20,9);cout<<"5.VOLVER AL MENU PRINCIPAL ";
		do {
			gotoxy(21,11);cout<<" DIGITE OPCION:"; cin>>secc;
		} while(secc<1&&secc>5);
		
		
		switch(secc){
			case 1: registro5();break;
			case 2: registro52();break;
			case 3: actualizar5();break;
			case 4:inform5();break;
			case 5: OP='N';break;
		}
	}
}
void registro5(){
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L1-*";
		gotoxy(20,4);cout<<" CEDULA: ";cin>>cc;
		if(cab5==NULL){
			enc='N';
		}
		else{
			q5=cab5;enc='N';
			while(q5 !=NULL && enc=='N'){
				if(q5->cc==cc){
					enc='S';
				}
				q5=q5->sig5;
			}	
		}
		if(enc=='S'){
			gotoxy(20,6);cout<<"TRABAJADOR YA ESTA REGISTRADO";
		}
		else{
			Nodo5 *p5 = new Nodo5();
		
			if(p5 ==NULL){
				cout<<" NO HAY MEMORIA DISPONIBLE";
			}
			else{
				
				p5->cc=cc;
				cin.sync();
				gotoxy(20,5);cout<<" NOMBRE: ";gets(p5->nom);
		
				
				p5->sig5=NULL;
				
			  if(cab5==NULL){
				cab5=p5;
			   }
			   else{
					r5=cab5;
				
					while(r5->sig5 != NULL){
						r5=r5->sig5;
					}
				 r5->sig5=p5;
				}
			}	
		}
	
		do {
			gotoxy(20,7);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
		
	}	
}
void registro52(){
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L2-*";
		gotoxy(20,4);cout<<" CEDULA: ";cin>>cc;
		if(cab52==NULL){
			enc='N';
		}
		else{
			q52=cab52;enc='N';
			while(q52 !=NULL && enc=='N'){
				if(q52->cc==cc){
					enc='S';
				}
				q52=q52->sig52;
			}	
		}
		if(enc=='S'){
			gotoxy(20,6);cout<<"TRABAJADOR YA ESTA REGISTRADO";
		}
		else{
			Nodo52 *p52 = new Nodo52();
			
			if(p52 ==NULL){
				cout<<" NO HAY MEMORIA DISPONIBLE";
			}
			else{
				p52->cc=cc;
				gotoxy(20,5);cout<<" HORAS TRABAJADAS: ";cin>>p52->horas;
				gotoxy(20,6);cout<<" VALOR DE HORAS: ";cin>>p52->valor;
				
				p52->sig52=NULL;
		
				if(cab52==NULL){
					cab52=p52;
			   	}
				else{
					r52=cab52;
					while(r52->sig52 != NULL){
						r52=r52->sig52;
					}
				 	r52->sig52=p52;
				}		
			}
		}
		
		
			
		do {
			gotoxy(20,8);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
		
	}	
	
}
void inform5(){
	
	int f=3;
	system("cls");
	gotoxy(40,1);cout<<"INFORME";
	if (cab5==NULL || cab52==NULL ){
		gotoxy(37,3);cout<<"POR FAVOR LLENE AMBAS LISTAS";
	}
	else{
		p5=cab5;
		system("cls");
		while(p5 != NULL){
			gotoxy(8,2);cout<<"CEDULA        NOMBRE EMPLEADO           PAGO TOTAL           DESCUENTO ";
			gotoxy(8,f);cout<<p5->cc;
			gotoxy(22,f);cout<<p5->nom;
			gotoxy(48,f);cout<<p5->pago;
			gotoxy(72,f);cout<<p5->descuento;
			
			p5=p5->sig5;
			f++;
		}	
	}
	gotoxy(34,f+2);cout<<"ENTER PARA VOLVER";
	getch();
}
void actualizar5(){
	
	system("cls");
	char enc;
	char opc='S';
	gotoxy(28,2);cout<<"*--ACTUALIZAR--*";
	if(cab5==NULL || cab52==NULL ){
		gotoxy(25,4);cout<<" LLENE AMBAS LISTAS";	
	}
	else{
		system("cls");
		p52=cab52; 
		while( p52!=NULL){
				p5=cab5;
			while(p5!=NULL){
				if(p52->cc == p5->cc){
					
					p5->pago = (p52->horas * p52->valor);
					//descuento = 8.5% salud, 8% pensión, 4% fondo de empleado 
					p5->descuento= (p5->pago*0.085)+(p5->pago*0.08)+(p5->pago*0.04);
					p5->pago = p5->pago - p5->descuento;
				
				}
				p5=p5->sig5;
			}
			p52=p52->sig52;	
		}
		gotoxy(25,4);cout<<"LISTAS ACTUALIZADAS";		
	}
	gotoxy(26,6);cout<<"ENTER PARA VOLVER";
	getch();
}

//******************* P6 *********************

void PUNTO6(){
	OP='S';
	
while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 6 ***";
		gotoxy(20,4);cout<<"1. REGISTRAR LISTA 1";
		gotoxy(20,5);cout<<"2. REGISTRAR LISTA 2";
		gotoxy(20,6);cout<<"3. INFORME";
		gotoxy(20,7);cout<<"4. RETIRAR";
		gotoxy(20,8);cout<<"5. VOLVER AL MENU PRINCIPAL";
		do {
			gotoxy(21,10);cout<<" DIGITE OPCION:"; cin>>secc;
		} while(secc<1&&secc>5);
		
		switch(secc){
			case 1:registro6();break;
			case 2:registro61();break;
			case 3:inform6();break;
			case 4:retirar6();break;
			case 5: OP='N';break;
		
  	}	
  }

}
void registro6(){
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L1-*";
		Nodo6 *p6 = new Nodo6();
		if(p6==NULL){
			gotoxy(20,4);cout<<"NO HAY MEMORIA DISPONIBLE";
		}
		else {
			gotoxy(20,4);cout<<"NUMERO: ";cin>>p6->Nume;
			
			p6->sig6=NULL;
			if(cab1==NULL){
				cab1=p6;
			}
			else{
				q6=cab1;
				while(q6->sig6 != NULL){
					q6=q6->sig6;
				}
			  q6->sig6=p6;
			}	
		}
	 do {
			gotoxy(19,7);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
	}
}
void registro61(){
	opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L2-*";
		Nodo61 *p61 = new Nodo61();
		if(p61==NULL){
			gotoxy(20,4);cout<<"NO HAY MEMORIA DISPONIBLE";
		}
		else {
			gotoxy(20,4);cout<<"NUMERO: ";cin>>p61->Nume1;
			
			p61->sig61=NULL;
			if(cab2==NULL){
				cab2=p61;
			}
			else{
				q61=cab2;
				while(q61->sig61 != NULL){
					q61=q61->sig61;
				}
			  q61->sig61=p61;
			}	
		do {
			gotoxy(19,7);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
	}
}
}
void inform6(){
	
	int f=3;
	system("cls");
	gotoxy(28,2);cout<<"*--INFORME--*";
	if (cab1==NULL || cab2==NULL ){
		gotoxy(25,4);cout<<" LLENE AMBAS LISTAS";
	}
	else{
		p6=cab1;p61=cab2;
		gotoxy(20,2);cout<<"LISTA 1             LISTA 2 ";
		while(p6 != NULL){	
			gotoxy(20,f);cout<<p6->Nume;
			p6=p6->sig6;
			f++;
		}	
		f=3;
		while(p61 != NULL){
				gotoxy(40,f);cout<<p61->Nume1;
				p61=p61->sig61;
				f++;
			}
	}
	gotoxy(25,f+2);cout<<"ENTER PARA VOLVER";
	getch();
}
void retirar6(){
	if(cab1==NULL&&cab2==NULL){
		gotoxy(20,11);cout<<"LLENE AMABAS LISTAS";
		getch();
	}
	else{
		char opc='S';
		while(opc=='S'){
			p61=cab2;char enc='N';
			while(p61 !=NULL&&enc=='N' ){//RECORRE L2
				p6=cab1;enc='N';
				
				
				while(p6!=NULL && enc=='N') {    
					if(p61->Nume1 == p6->Nume) {//si esta en ambas borra
						enc='S';borrar(&*p6);
					}
					p6=p6->sig6;
				}	
				p61=p61->sig61;	
			}	
			//sale dl ciclo solo cuando haya recorrido por completos ambas listas
			if(p6==NULL&&p61==NULL){
				opc='N';
			}	
			else{
				opc='S';
			}
		}
			
	}	
	gotoxy(23,12); cout<<"**RETIRADO**";
	getch();
}
void borrar(Nodo6 *p6){
	if(cab1==NULL){
		gotoxy(25,5);cout<<"LISTA VACIA";	
	}
	else{
		if (cab1==p6){//ESTA EN EL PRIMER
			cab1 =cab1->sig6;
			delete(p6);
		}
		else{
			if (p6->sig6==NULL){//SI ESTA DE ULTIMO
				q6=cab1;
				while(q6->sig6!=p6){
					q6=q6->sig6;
				}
				q6->sig6=p6->sig6;
				delete(p6);
			}
			else{// si esta en e medio
				q6=cab1;
				while(q6->sig6!=p6){
					q6=q6->sig6;
				}
				q6->sig6=p6->sig6;
				delete(p6);	
			}
		}				
	}

}

//******************** P7 *************************
void PUNTO7(){
	OP='S';
	while(OP=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*** PUNTO 7***";
		gotoxy(20,4);cout<<"1. REGISTRAR LISTA 1";
		gotoxy(20,5);cout<<"2. REGISTRAR LISTA 2";
		gotoxy(20,6);cout<<"3. INFORME";
		gotoxy(20,7);cout<<"4. RETIRAR";
		gotoxy(20,8);cout<<"5. VOLVER AL MENU PRINCIPAL";
		do {
			gotoxy(21,10);cout<<" DIGITE OPCION:"; cin>>secc;
		} while(secc<1&&secc>5);
		switch(secc){
			case 1:registroL1();break;
			case 2:registroL2();break;
			case 3:inform7();break;
			case 4:rep7();break;
			case 5:OP='N';break;
		}
		
	}
}
void registroL1(){
	char opc='S';
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L1-*";
		gotoxy(20,4);cout<<"CODIGO: ";cin>>cod7;
		if(cab17==NULL){
			enc='N';
		}
		else{
			q7=cab17;enc='N';
			while(q7 !=NULL && enc=='N'){
				if(q7->codigo==cod7){
					enc='S';
				}
				q7=q7->sig7;
			}	
		}
		if(enc=='S'){
			gotoxy(20,6);cout<<"YA ESTA REGISTRADO";
		}
		else{
			L1 *p7 = new L1();
			if(p7==NULL){
				gotoxy(20,7);cout<<"NO HAY MEMORIA DISPONIBLE";
			}
			else {
				p7->codigo=cod7;
				
				p7->sig7=NULL;
				if(cab17==NULL){
					cab17=p7;
				}
				else{
					q7=cab17;
					while(q7->sig7 != NULL){
						q7=q7->sig7;
					}
				  q7->sig7=p7;
				}	
			}	
			
		}
		
		do {
			gotoxy(19,7);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
	 
	}
}
void registroL2(){
	opc='S'; 
	while(opc=='S'){
		system("cls");
		gotoxy(23,2);cout<<"*-REGISTRO L2-*";
		gotoxy(20,4);cout<<"CODIGO: ";cin>>cod7;
		if(cab27==NULL){
			enc='N';
		}
		else{
			q71=cab27;enc='N';
			while(q71 !=NULL && enc=='N'){
				if(q71->codigo==cod7){
					enc='S';
				}
				q71=q71->sig71;
			}	
		}
		if(enc=='S'){
			gotoxy(20,6);cout<<"YA ESTA REGISTRADO";
		}
		else{
			L2 *p71 = new L2();
			if(p71==NULL){
				gotoxy(20,7);cout<<"NO HAY MEMORIA DISPONIBLE";
			}
			else {
				p71->codigo=cod7;
				gotoxy(20,5);cout<<"LETRA: ";cin>>p71->Accion;p71->Accion=toupper(p71->Accion);
				p71->sig71=NULL;
				if(cab27==NULL){
					cab27=p71;
				}
				else{
					q71=cab27;
					while(q71->sig71 != NULL){
						q71=q71->sig71;
					}
				  q71->sig71=p71;
				}	
			}
		}
		
		do {
			gotoxy(19,6);cout<<"DESEA REGISTAR OTRO s/n: "; cin>>opc;opc=toupper(opc);	
		} while(opc!='S'&&opc!='N');
	 
	}
}
void inform7(){
	
	int f=5;
	system("cls");
	gotoxy(28,2);cout<<"*--INFORME--*";
	if (cab17==NULL || cab27==NULL ){
		gotoxy(25,3);cout<<" LLENE AMBAS LISTAS";
	}
	else{
		p7=cab17;p71=cab27;
		gotoxy(20,3);cout<<"LISTA 1               LISTA 2 ";
		gotoxy(20,4);cout<<"CODIGO            CODIGO   LETRA";
		while(p7 != NULL){	
			gotoxy(21,f);cout<<p7->codigo;
			p7=p7->sig7;
			f++;
		}	
		f=5;
		while(p71 != NULL){
				gotoxy(39,f);cout<<p71->codigo;
				gotoxy(49,f);cout<<p71->Accion;
				p71=p71->sig71;
				f++;
			}
	}
	gotoxy(25,f+2);cout<<"ENTER PARA VOLVER";
	getch();
}
void rep7(){
	if(cab17==NULL||cab27==NULL){
		gotoxy(20,11);cout<<"LLENE AMABAS LISTAS";
		getch();
	}
	else{
		opc='S';
		while(opc=='S'){
			p71=cab27;char enc='N';
			while(p71 !=NULL&&enc=='N' ){//recorre L2
				p7=cab17;enc='N';	
				while(p7!=NULL && enc=='N') {    //recore L1
					if((p71->codigo == p7->codigo) && (p71->Accion=='A'||p71->Accion=='R')) {
						enc='S';borrar7(&*p7);
					}
					p7=p7->sig7;
				}	
				p71=p71->sig71;	
			}	
			//sale del ciclo solo cuando haya recorrido por completos ambas listas
			if(p7==NULL&&p71==NULL){
				opc='N';
			}	
			else{
				opc='S';
			}
		}
	gotoxy(22,12); cout<<"**RETIRADO**";
	getch();		
	}	
}
void borrar7(L1 *p7){

	if (cab17==p7){//ESTA EN EL PRIMER
		cab17 =cab17->sig7;
		delete(p7);	
	}
	else{
		if (p7->sig7==NULL){//SI ESTA DE ULTIMO
			q7=cab17;
			while(q7->sig7!=p7){
				q7=q7->sig7;
			}
			q7->sig7=p7->sig7;
			delete(p7);
			
		}
		else{// SI ESTA EN EL MEDIO
			q7=cab17;
			while(q7->sig7!=p7){
				q7=q7->sig7;
			}
			q7->sig7=p7->sig7;
			delete(p7);
				
		}
	}				
}

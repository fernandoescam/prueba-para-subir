 #include <iostream>
 using namespace std;
 int main(){
    int opcion;
    opcion = 0;
    int fallos = 0;

    bool letra_correcta = false;
    bool palabra_correcta = false;

    const string palabra = "hola";
    string mostrar;
    char letra;
    int n;
    string num [100];
    //menu para agregar jugadores utilizando un do while para solo aceptar datos entre 1 y 4
     do
    {
    cout<<"Bienvenido al juego de ahorcados""\n";
    cout<<"cuantos jugaran(maximo 4).""\n";
    cin>>n;   
     if(n>4||n<1){
        cout<<"datos incorrectos, el maximo es de 4 jugadores""\n";
    }
     } while (n>4||n<1);
     //introducir datos de los jugadores con un for, segun el numero de jugadores que se eligio antes
   
         for(int i=0; i<n; i++){
        cout<<"introduzca un nombre del jugador"<<i+1<<"\n";
        cin>>num[i];
       }
    //se muestra en pantalla los jugadores en orden 
    for(int j=0; j<n; j++){
    cout<<"El jugador"<<j+1<<"es""\n"<<num[j]<<"\n";
   }
   while (fallos < 6 && !palabra_correcta)
   for(int k=0; k<n; k++){
  
    cout<<"turno de "<<num[k]<<"\n""ingrese una letra""\n";
    ;
    

    for (int i = 0; i < 4; i++)
    {
        mostrar[i] = '_';
    }
    
    //mientras los fallos sean menores a 6 y la palabra no este descubierta
    {
        for (int i = 0; i < 4; i++){
            cout<<mostrar[i]<<" ";
        }
        
        cin>>letra;//Jugador inserta la letra

        letra_correcta = false;//la variable de letra verdadera se resetea a falso para continuar con la comparación
        palabra_correcta = false;

        for (int i = 0; i < 4; i++){//loop para confirmar si la letra existe en la palabra a encontrar

            if (letra == palabra[i]){//la letra es igual a alguna letra de la palabra

                mostrar[i] = letra;//El guion bajo se cambia a la letra correcta
                letra_correcta = true;//Si en algun momento la letra coincide con una de la palabra esta variable se volvera verdad
            }
            
        }

//Si la letra no coincide con ninguna de la palabra original entonces se aumentan los fallos
        if (letra_correcta == false){
            fallos++;
           switch (fallos)
           {
           case 1:
            cout<<"fallos:1""\n";
            break;
            case 2:
            cout<<"fallos:2""\n";
            break;
            case 3:
            cout<<"fallos:3""\n";
            break;
            case 4:
            cout<<"fallos:4""\n";
            break;
            case 5:
            cout<<"fallos:5""\n";
            break;
            case 6:
            cout<<"fallos:6""\n";
            break;
           
           default:
            break;
           }
           
            
            //aqui se aumentarian los fallos del jugador
        }

        for (int i = 0; i < 4; i++){

        if (mostrar[i] == palabra[i]){
            palabra_correcta = true;
        }

        else if (mostrar[i] != palabra[i]){
            palabra_correcta = false;
        }

        }

    }

    for (int i = 0; i < 4; i++)
    {
        cout<<mostrar[i]<<" ";
    }
   
    
    

    
}return 0; 
}

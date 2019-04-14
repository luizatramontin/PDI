#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main()
{
  Mat image;
  int x0,x1,y0,y1;


image= imread("luiza.png",CV_LOAD_IMAGE_GRAYSCALE);
  if(!image.data)
    cout << "nao abriu luiza.png" << endl;

//Esse programa deverá solicitar ao usuário as coordenadas de dois pontos P1 e P2 localizados dentro dos limites do tamanho da imagem e exibir que lhe for fornecida. 


// Vamos mostrar ao usuario os limites da imagem utilizada

cout<<"Limites da imagem:"<<endl;
cout<<" O limite da altura da imagem é:   "<<image.rows<<endl;
cout<<"O limite da largura da imagem é:   "<<image.cols<<endl;

cout<<"Escolha as coordenadas de dois pontos P1 (P1.x,P1.y) e P2(P2.x,P2,y) localizados dentro dos limites do tamanho da imagem, onde você deseja exibir o negativo da imagem"<<endl<<endl;
cout<<"Digite P1.X"<<endl;
cin>>x0;
cout<<"Digite P1.y"<<endl;
cin>>y0;
cout<<"Digite P2.X"<<endl;
cin>>x1;
cout<<"Digite P2.y"<<endl;
cin>>y1;

 namedWindow("Atividade1",WINDOW_AUTOSIZE);

  for(int i=y0;i<y1;i++){
    for(int j=x0;j<x1;j++){
      image.at<uchar>(i,j)=255-image.at<uchar>(i,j);
    }
  }
			   
imshow("Atividade1",image);
waitKey();

return 0;
}


//		����������ͼ��ʴerode�����÷�ʾ��
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main(   )
{
	//����ԭͼ  
	Mat srcImage = imread("../39_erode.jpg");
	//��ʾԭͼ
	imshow("��ԭͼ����ʴ����", srcImage);
	//���и�ʴ���� 
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//��ʾЧ��ͼ 
	imshow("��Ч��ͼ����ʴ����", dstImage);
	waitKey(0); 

	return 0;
}
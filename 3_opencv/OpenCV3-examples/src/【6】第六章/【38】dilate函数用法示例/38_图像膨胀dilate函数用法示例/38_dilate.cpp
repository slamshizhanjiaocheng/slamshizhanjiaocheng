
//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版书本配套示例程序38
//		程序描述：图像膨胀dilate函数用法示例
//		开发测试所用操作系统： Windows 7 64bit
//		开发测试所用IDE版本：Visual Studio 2010
//		开发测试所用OpenCV版本：	3.0 beta
//		2014年11月 Created by @浅墨_毛星云
//		2014年12月 Revised by @浅墨_毛星云
//------------------------------------------------------------------------------------------------

//-----------------------------------【头文件包含部分】---------------------------------------
//	描述：包含程序所依赖的头文件
//---------------------------------------------------------------------------------------------- 
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

//-----------------------------------【命名空间声明部分】---------------------------------------
//	描述：包含程序所使用的命名空间
//-----------------------------------------------------------------------------------------------  
using namespace std;
using namespace cv;

//-----------------------------------【main( )函数】--------------------------------------------
//	描述：控制台应用程序的入口函数，我们的程序从这里开始
//-----------------------------------------------------------------------------------------------
int main(   )
{

	//载入原图  
	Mat image = imread("1.jpg");

	//创建窗口  
	namedWindow("【原图】膨胀操作");
	namedWindow("【效果图】膨胀操作");

	//显示原图
	imshow("【原图】膨胀操作", image);

	//进行膨胀操作 
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat out;
	dilate(image, out, element);

	//显示效果图 
	imshow("【效果图】膨胀操作", out);

	waitKey(0); 

	return 0;
}
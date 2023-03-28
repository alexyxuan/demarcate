#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace  cv;
using namespace  std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("张友正标定法");
    connect(ui->pushButton_catch,SIGNAL(clicked()),this,SLOT(catch_image()));
    connect(this,SIGNAL(tried_show(int)),this,SLOT(show_image(int)));
    connect(ui->pushButton_calculate,SIGNAL(clicked()),this,SLOT(calculate()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::catch_image()
{
     qDebug()<<"开始截取图片"<<endl;

     try {
         VideoCapture cap(0);
         Mat frame; //用于存储数据s
         cap >> frame;
         string  filename = to_string(catch_flag)  + ".jpg";
         qDebug()<<QString::fromStdString(filename)<<endl;
         imwrite(filename,frame);
     } catch (cv::Exception& e ) {
         QMessageBox::critical(this,tr("未检测到摄像头"),tr("请插好摄像头"));
     }

     emit tried_show(catch_flag);
     catch_flag++;
     if(catch_flag>9)
     {
         ui->pushButton_catch->setEnabled(false);
     }
}


void MainWindow::show_image(int flag)
{
    qDebug()<<"开始显示图片"<<endl;
    switch (flag) {
    case 1:
    {
        Mat image1 = cv::imread("1.jpg");
        QImage qimage1;
        qimage1 = QImage((image1.data),image1.cols,image1.rows,image1.step,QImage::Format_BGR888);
        int h1 = ui->label_1->height();
        int w1 = ui->label_1->width();

        QPixmap pixmap1 = QPixmap::fromImage(qimage1.rgbSwapped());
        ui->label_1->setScaledContents(true);
        pixmap1 = pixmap1.scaled(w1,h1,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_1->setPixmap(pixmap1);

        break;
    }
    case 2:
    {
        Mat image2 = cv::imread("2.jpg");
        QImage qimage2;
        qimage2 = QImage((image2.data),image2.cols,image2.rows,image2.step,QImage::Format_BGR888);
        int h2 = ui->label_2->height();
        int w2 = ui->label_2->width();

        QPixmap pixmap2 = QPixmap::fromImage(qimage2.rgbSwapped());
        ui->label_2->setScaledContents(true);
        pixmap2 = pixmap2.scaled(w2,h2,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_2->setPixmap(pixmap2);
        break;
    }
    case 3:
    {
        Mat image3 = cv::imread("3.jpg");
        QImage qimage3;
        qimage3 = QImage((image3.data),image3.cols,image3.rows,image3.step,QImage::Format_BGR888);
        int h3 = ui->label_3->height();
        int w3 = ui->label_3->width();

        QPixmap pixmap3 = QPixmap::fromImage(qimage3.rgbSwapped());
        ui->label_3->setScaledContents(true);
        pixmap3 = pixmap3.scaled(w3,h3,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_3->setPixmap(pixmap3);
        break;
    }
    case 4:
    {
        Mat image4 = cv::imread("4.jpg");
        QImage qimage4;
        qimage4 = QImage((image4.data),image4.cols,image4.rows,image4.step,QImage::Format_BGR888);
        int h4 = ui->label_4->height();
        int w4 = ui->label_4->width();

        QPixmap pixmap4 = QPixmap::fromImage(qimage4.rgbSwapped());
        ui->label_4->setScaledContents(true);
        pixmap4 = pixmap4.scaled(w4,h4,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_4->setPixmap(pixmap4);
        break;
    }
    case 5:
    {
        Mat image5 = cv::imread("5.jpg");
        QImage qimage5;
        qimage5 = QImage((image5.data),image5.cols,image5.rows,image5.step,QImage::Format_BGR888);
        int h5 = ui->label_5->height();
        int w5 = ui->label_5->width();

        QPixmap pixmap5 = QPixmap::fromImage(qimage5.rgbSwapped());
        ui->label_5->setScaledContents(true);
        pixmap5 = pixmap5.scaled(w5,h5,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_5->setPixmap(pixmap5);
        break;
    }
    case 6:
    {
        Mat image6 = cv::imread("6.jpg");
        QImage qimage6;
        qimage6 = QImage((image6.data),image6.cols,image6.rows,image6.step,QImage::Format_BGR888);
        int h6 = ui->label_6->height();
        int w6 = ui->label_6->width();

        QPixmap pixmap6 = QPixmap::fromImage(qimage6.rgbSwapped());
        ui->label_6->setScaledContents(true);
        pixmap6 = pixmap6.scaled(w6,h6,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_6->setPixmap(pixmap6);
        break;
    }
    case 7:
    {
        Mat image7 = cv::imread("7.jpg");
        QImage qimage7;
        qimage7 = QImage((image7.data),image7.cols,image7.rows,image7.step,QImage::Format_BGR888);
        int h7 = ui->label_7->height();
        int w7 = ui->label_7->width();

        QPixmap pixmap7 = QPixmap::fromImage(qimage7.rgbSwapped());
        ui->label_7->setScaledContents(true);
        pixmap7 = pixmap7.scaled(w7,h7,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_7->setPixmap(pixmap7);
        break;
    }
    case 8:
    {
        Mat image8 = cv::imread("8.jpg");
        QImage qimage8;
        qimage8 = QImage((image8.data),image8.cols,image8.rows,image8.step,QImage::Format_BGR888);
        int h8 = ui->label_8->height();
        int w8 = ui->label_8->width();

        QPixmap pixmap8 = QPixmap::fromImage(qimage8.rgbSwapped());
        ui->label_8->setScaledContents(true);
        pixmap8 = pixmap8.scaled(w8,h8,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_8->setPixmap(pixmap8);
        break;
    }
    case 9:
    {
        Mat image9 = cv::imread("9.jpg");
        QImage qimage9;
        qimage9 = QImage((image9.data),image9.cols,image9.rows,image9.step,QImage::Format_BGR888);
        int h9 = ui->label_9->height();
        int w9 = ui->label_9->width();

        QPixmap pixmap9 = QPixmap::fromImage(qimage9.rgbSwapped());
        ui->label_9->setScaledContents(true);
        pixmap9 = pixmap9.scaled(w9,h9,Qt::KeepAspectRatio,Qt::SmoothTransformation);
        ui->label_9->setPixmap(pixmap9);

        break;
    }

        }

}

QString MainWindow::Mat2QString(const Mat &src)
{
    if(src.empty())
    {
        return QString();
    }
    else
    {
        stringstream stream;
        stream<<src;
        return QString::fromStdString(stream.str());
    }
}

void MainWindow::calculate()
{
    qDebug()<<"开始计算"<<endl;
    ui->textBrowser_result->setText(tr("这里展示结果"));

    //1.准备标定棋盘图像
    int boardWidth = 7 ; //棋盘格横向内角点数量
    int boardHeight = 7 ; //棋盘格纵向内角点数量
    float squareSize = 1.f; //棋盘格格子的大小，单位为米，随便设置，不影响相机内参计算

    Size boardSize(boardWidth,boardHeight);

    vector<vector<Point3f>> objectPoints;
    vector<vector<Point2f>> imagePoints;
    vector<Point2f> corners;

    //读取棋盘图像
    Mat image,gray;
    vector<String> filenames;
    glob("./*.jpg",filenames);
    for(int i = 0 ;i<filenames.size();i++)
    {
       image =  cv::imread(filenames[i],IMREAD_COLOR);
       cvtColor(image,gray,COLOR_BayerRG2GRAY);

       //3、读入图像数据，并提取角点
       bool found = findChessboardCorners(image,boardSize,corners,CALIB_CB_ADAPTIVE_THRESH+CALIB_CB_NORMALIZE_IMAGE+CALIB_CB_FAST_CHECK);

       if (found)
       {
           cornerSubPix(gray,corners,Size(11,11),Size(-1,-1),TermCriteria(TermCriteria::EPS+TermCriteria::COUNT,30,0.1));
           drawChessboardCorners(image,boardSize,corners,found);


           vector<Point3f> objectCorners;
           for (int j = 0; j < boardHeight; j++)
           {
               for (int k = 0; k < boardWidth; k++)
               {
                   objectCorners.push_back(Point3f(k * squareSize, j * squareSize, 0));
               }
           }
           objectPoints.push_back(objectCorners);
           imagePoints.push_back(corners);
       }
    }

    //4.标定相机
    Mat cameraMatrix,distCoeffs;
    vector<Mat>rvecs,tvecs;
    calibrateCamera(objectPoints,imagePoints,image.size(),cameraMatrix,distCoeffs,rvecs,tvecs);

    ui->textBrowser_result->append("Camera matirx:");
    ui->textBrowser_result->append(Mat2QString(cameraMatrix));
    ui->textBrowser_result->append("Distortion coefficients:");
    ui->textBrowser_result->append(Mat2QString(distCoeffs));

}

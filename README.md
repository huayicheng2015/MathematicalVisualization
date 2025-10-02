# 数学可视化

## 项目定位

- 学习c++、Qt 6.x、OpenGL

## 待完成功能

1. 在应用程序窗口的任意位置，能够显示一个像素点
2. 应用程序启动后显示为最大化，且允许用户最小化、全屏化，但不允许用户调节窗口大小（该功能留给愿意为本项目贡献代码的人）

## 我的系统配置

- MacBook Pro Intel macOS 12
- Xcode 14
- Qt 6.4
- OpenGL 4.1

## 项目配置

通过某种方式把项目下载到本地，在项目根目录下新建文件为`globalconfig.h`，该文件的内容如下所示：

```cpp
#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

#define MV_OPENGL_MAJOR_VERSION 4
#define MV_OPENGL_MINOR_VERSION 1

#endif // GLOBALCONFIG_H

```

其中`MV_OPENGL_MAJOR_VERSION`和`MV_OPENGL_MINOR_VERSION`的值可以自定义，允许自定义的范围限定为3.2、3.3、4.0、4.1。另外，**请勿**将该文件加入Git。

## 已有功能

截至2025年10月02日，暂无任何功能。

## 交流与沟通、贡献

目前，交流与沟通的渠道是[Github Issues](https://github.com/huayicheng2015/MathematicalVisualization/issues)。

贡献代码的方式为PR，具体为以[Github Issues](https://github.com/huayicheng2015/MathematicalVisualization/issues)的形式发出通知，表明要PR的意愿，我回复之后，贡献者再提PR。

## 运行效果

![运行效果图](https://github.com/huayicheng2015/MathematicalVisualization/blob/master/%E8%BF%90%E8%A1%8C%E6%95%88%E6%9E%9C%E5%9B%BE/%E6%88%AA%E5%B1%8F2025-09-17%2019.10.32.png)

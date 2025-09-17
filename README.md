# 数学可视化

## 项目定位

- 学习c++、Qt 6.x、OpenGL

## 待完成功能

1 在应用程序窗口的任意位置，能够显示一个像素点

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

constexpr int opengl_major_version = 4;
constexpr int opengl_minor_version = 1;

#endif // GLOBALCONFIG_H

```

其中`opengl_major_version`和`opengl_minor_version`的值可以自定义。另外，**请勿**将该文件加入Git。

## 已有功能

截至2025年09月17日，暂无任何功能。

## 交流与沟通

目前，交流与沟通的渠道是[Github Issues](https://github.com/huayicheng2015/MathematicalVisualization/issues)。

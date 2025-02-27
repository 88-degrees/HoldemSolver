# 德州扑克解牌局

[![license](https://img.shields.io/github/license/bupticybee/TexasSolver?style=flat-square)](https://github.com/bupticybee/TexasSolver/blob/master/LICENSE)
[![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/bupticybee/TexasSolver/blob/console/TexasSolverTechDemo.ipynb)

[English](README.md) | [中文](README.zh-CN.md)

## 介绍

开源的德州扑克解牌局。[介绍视频](https://www.bilibili.com/video/BV1sr4y1C7KE) 了解更多。

![](imgs/solver_example.gif)

### 特点

- 对于 1~2 bet + allin的游戏树求解速度超过 piosolver 
- 支持 Mac OS, Linux and Windows平台
- 支持德州扑克和短牌
- 支持跨语言调用，支持 console 调用
- 结果和 piosolver 对齐
- 支持将最优策略保存为 json 文件
- 是 [TexasHoldemSolverJava](https://github.com/bupticybee/TexasHoldemSolverJava) 的c++版本，速度是前者的5倍以上，而内存使用仅有前者的1/3不到。

你可以通过 [google colab demo](https://colab.research.google.com/github/bupticybee/TexasSolver/blob/console/TexasSolverTechDemo.ipynb) 体验这个solver。

## 安装

根据你的操作系统型号从  [release package](https://github.com/bupticybee/TexasSolver/releases) 下载相应的包, 解压缩, 安装就完成了。就是这么简单。

## 图形界面版本使用

在安装应用之后，双击应用的图标 (在windows下，双击TexasSolverGui.exe；在mac下，双击 TexasSolverGui.app) 来运行TexasSolver。

## 命令行版本使用

请查看 [命令行版本文档](https://github.com/bupticybee/TexasSolver/tree/console#usage) 获取更多信息.

## 和 piosolver 的速度对比

两者均在一个 spr=10 的 flop 局面上进行计算，结果对齐。

|                   | 输入配置                                            | 运行日志                                                       | 线程数 | 内存 | 结束精度 | 运行时间 |
| ----------------- | ------------------------------------------------------- | ------------------------------------------------------------------ | ------ | ------ | -------- | -------- |
| piosolver 1.0     | [config_piosolver](benchmark/benchmark_piosolver.txt)   | [log_piosolver](benchmark/benchmark_outputs/piosolver_log.txt)     | 6      | 492Mb  | 0.29%    | 242s     |
| TexasSolver 0.1.0 | [config_texassolver](benchmark/benchmark_texassolver.txt) | [log_texassolver](benchmark/benchmark_outputs/texassolver_log.txt) | 6      | 1600Mb | 0.275%   | 175s     |

对齐结果的图片见 [result_compair](benchmark/benchmark_outputs/result_compair.png). 如你所见，两者的结果非常接近。

## License

[GNU AGPL v3](https://www.gnu.org/licenses/agpl-3.0.en.html)

> 原作者的Email：icybee@yeah.net

## 常见问题

1. 问：这个应用是完全免费的么?
   - 答：是的, 对于个人用户来说，这个应用是完全开源并且免费的。

2. 问：我可以把这个应用上传到其他网站/微信 qq 群或者分享给我的朋友么？
   - 答：不可以，你只能将项目的地址进行分享，不能直接分享项目的二进制文件。这个项目的 License 是 AGPL-V3, 直接分享/上传软件二进制文件直接违反了开源协议。

3. 问：我可以将这个应用整合进我自己的商用软件么?
   - 答：如果你只是将软件的二进制文件整合进你的软件，那么可以，但是你仍然不可以分发TexasSolver的二进制文件。如果你想要将TexasSolver的源码整合进你的商用软件中，或者你的软件对外提供基于互联网的服务，那么你需要联系我付费取得一张商用License，这也是这个项目主要的盈利方式。

4. 问：应用使用了什么框架？
   - 答：QT 6.2.1 ，Mingw 和 CMake 。

## 扑克策略

- 当你的牌足够强的时候。
- 当你的对手多半会弃牌的时候。
- 当前面两种因素都不能匹配，但将两者综合考虑在一起会使下注是+EV的时候。
- 当你的牌需要保护的时候。
- 当你处于有利位置希望免费摊牌的时候。
- 为了更好地掩饰你的牌力的时候。

# C/CPP项目模板

这是一个用于C/CPP语言开发的模板项目，使用CMake作为构建系统。

## 特性

- 使用CMake管理项目构建
- 包含基本的.gitignore配置
- 支持VS Code开发环境

## 构建系统配置

### 生成器选择

支持以下生成器配置：
- CMake生成器（默认）
- Ninja生成器（推荐高性能构建）

### 终端构建步骤
```bash
mkdir build
cd build
# 使用CMake生成器
cmake ..
cmake --build .

# 或使用Ninja生成器
cmake -G Ninja ..
ninja
```

## VS Code配置指南
1. 安装CMake Tools扩展
2. 通过 `Ctrl`+`Shift`+`B` 选择操作

## 灵活配置
- 通过CMake命令行参数自定义构建
- 支持多配置构建（Debug/Release）
- 可扩展的构建脚本

## 开发环境要求
- CMake 3.10+
- VS Code 1.60+
- Ninja 1.10+（可选）

# my-zephyr-app

基于 [Zephyr RTOS](https://zephyrproject.org/) 的示例应用，可构建到 **Raspberry Pi Pico** 真实硬件，也可通过 **native_sim** 在主机上直接运行仿真。

[![Build Pico Firmware & Run Simulator](https://github.com/<你的用户名>/<你的仓库名>/actions/workflows/build.yml/badge.svg)](https://github.com/<你的用户名>/<你的仓库名>/actions/workflows/build.yml)

## 功能

- ✅ 为 Raspberry Pi Pico（`rpi_pico`，RP2040 / ARM Cortex-M0+）构建固件，产物为 `zephyr.uf2`
- ✅ 为 `native_sim` 构建主机可执行文件，无需硬件即可运行
- ✅ CI 中启用 ccache 与 West workspace 缓存，重复构建大幅加速
- ✅ 每次 push 到 `main` 后自动刷新下方「模拟器输出」区域

## 环境要求

- [Zephyr SDK](https://github.com/zephyrproject-rtos/zephyr)（CI 中使用 `arm-zephyr-eabi` 工具链）
- `west`、`cmake`、`ninja`、`python3`
- 本地推荐安装 `ccache` 以加速重复编译

## 构建

### 1. 初始化 West 工作区

```bash
west init -l .
west update
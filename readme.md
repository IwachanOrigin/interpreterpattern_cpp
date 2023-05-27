# Interpreter pattern cpp demo code

## Overview

    Interpreter Patternの使い方

## 使いどころ

    いわゆる、「規則」や「文法」のような概念をオブジェクトとして表現する場合に用いられるパターンです。  
    この例では、チケットの購入ルールをオブジェクトとして表現し、コンソールへ出力しています。  
    AbstructPolicyクラスが基底クラスとして存在し、継承することで必ず実装が必要になるbuyという  
    純粋仮想関数で購入方法に変化を与える手法を用いています。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 16 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/interpreterpattern_cpp/blob/master/LICENSE)


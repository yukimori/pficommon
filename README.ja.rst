============================
pficommon: 汎用C++ライブラリ
============================

概要
====

C++用汎用ライブラリです。GCC 4.1.2 以降対応。

インストール
============

次の手順でインストールできます。

..

  $ ./waf configure
  $ ./waf build
  $ ./waf install


memo
====

ustringの挙動を調査するためにustring_utf_decode_testを利用中

./waf build --checkone=ustring_utf_8_decode_test
./build/src/data/ustring_utf_8_decode_test

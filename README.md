# mindmap

## development

<pre>
.
|-> mindmap
|-> libs
  |->qt5
</pre>

### Initial setup

##### Install & build QT libs
Here is used opensource version. Go to folder where QT5 lib will be built and referenced from main project.
Script for Mac (full details are [here](https://github.com/qt/qt5/tree/5.15.1)):
<pre>
cd libs
git clone git://code.qt.io/qt/qt5.git
cd qt5
git checkout 5.15.1
./init-repository
export LLVM_INSTALL_DIR=/usr/llvm
./configure -prefix $PWD/qtbase -opensource -nomake tests
</pre>
To build dev libs run:
<pre>
./configure -developer-build -opensource
make -j4
</pre>

<b> TODO: update with individual build 

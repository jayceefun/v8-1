
Downloading, building, and installing V8
----

# Prerequistes

Before you can build V8 you will need either [git](http://git-scm.com/downloads) or
[svn](http://subversion.apache.org/) installed on your machine.

# Download

You can get the V8 source with Git or SVN. 

## Git

You will first need to clone down the repository.

```sh
$ git clone git://github.com/v8/v8.git v8 && cd v8
```

After you've cloned the repository you should then pull from master and
rebase.

```sh
$ git pull --rebase origin master
```

## SVN

You will need to check out an up to date version of V8.

```sh
$ svn checkout http://v8.googlecode.com/svn/trunk/ v8
```

# Building

Once you've obtained V8's source code you can then build V8. Before you
start the build process you will need GYP (Generate Your Project)
installed with the build.

## *nix

If you are on a Linux, Mac, or other *nix machine then you can simply
use `make` to install it.

From the root of the v8 source directory run:

```sh
$ make dependencies
```

## Windows

If you are on a Windows machine then you need to get GYP with SVN and
check it out into the `build/` directory of the root of V8's source.

```sh
svn co http://gyp.googlecode.com/svn/trunk build/gyp
``` 

After you've successfully installed GYP then you are ready to build.
Google has provided a full length document on how to build V8 that is
managed on V8's wiki. You can find the document
[here](https://code.google.com/p/v8/wiki/BuildingWithGYP#Building)

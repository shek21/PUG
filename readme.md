[![analytics](http://www.google-analytics.com/collect?v=1&t=pageview&_s=1&dl=https%3A%2F%2Fgithub.com%2FIITDBGroup%2Fgprom%2Fmain&_u=MAC~&cid=123456789&tid=UA-92255635-2)]()
[![Build Status](https://travis-ci.org/IITDBGroup/gprom.svg?branch=master)](https://travis-ci.org/IITDBGroup/gprom)

# Overview

**PUG** is a database middleware that adds provenance support for First-Order Datalog queries (non-recursive queries with negation) to multiple database backends. Provenance is information about how results of a query depend on the query's input. That is, for Datalog, how the result is derived through the rules of the input query. PUG produces provenance graphs explaining provenance (why a tuple exists in the result) and also missing answers (it is missing from the result). Both types of provenance are captured on demand by using a compilation technique called *instrumentation*. Instrumentation rewrites an input Datalog query into a query that returns an explanation that justifies the existence or absence of a result based on the success or failure to derive the result using the rules of the input query and explain how the existence or absence of tuples in the database causes the derivation to succeed or fail. The output of the instrumentation process is a regular SQL query that can be executed using any standard relational databases (e.g., Oracle, Postgres, and SQLite). The system also supports sample-based summrization of both answers and non-answers which provides concise explanations that a user can literally unearth meaningful insights even over the large datasets. For information about the research behind PUG, please have a look at the IIT DBGroup's [webpage](http://www.cs.iit.edu/%7edbgroup/research/gp.php). 

# Online Demos

* [Online Demo for Provenance Graph Viewer](http://ec2-35-164-188-60.us-west-2.compute.amazonaws.com:5000)

# Documentation

* [Installation Instructions](https://github.com/IITDBGroup/gprom/wiki/installation)
* [Tutorial](https://github.com/IITDBGroup/gprom/wiki/lang_datalog)
* [GProM Commandline Shell Manual](https://github.com/IITDBGroup/gprom/blob/master/doc/gprom_man.md)
* [Docker containers](https://github.com/IITDBGroup/gprom/wiki/docker)
* [Provenance Graphs for Datalog](https://github.com/IITDBGroup/gprom/wiki/datalog_prov)

# Features

+ Produce provenance graphs for Datalog queries that explain why (provenance) or why-not (missing answers) a tuple is in the result of a Datalog query
+ Produce sample-based summaries for explaning answers and non-answers with meaningful insights

# Usage #

To use **gprom**, the interactive shell of PUG, you will need to have one of the supported backend databases installed. For casual use cases, you can stick to SQLite. However, to fully exploit the features of PUG, you should use Oracle. We also provide several docker containers with gprom preinstalled (see [here](https://github.com/IITDBGroup/gprom/wiki/docker)) When starting gprom-dl, you have to specify connection parameters to the database. For example, using one of the convenience wrapper scripts that ship with PUG, you can connect to a test SQLite database included in the repository by running the following command in the main source folder after installation:

```
gprom -backend sqlite -db ./examples/test.db
```

will start the shell connecting to an SQLite database `./examples/test.db`. If GProM is able to connect to the database, then this will spawn a shell like this:

```
GProM Commandline Client
Please input a SQL command, '\q' to exit the program, or '\h' for help
======================================================================

Oracle SQL - SQLite:./examples/test.db$
```

In this shell you can enter Datalog and utility commands. The shell in turn will show you query results (just like your favorite DB shell). However, the main use of GProM is on-demand capture of provenance for database operations. You can access this functionality through several new SQL language constructs supported by GProM. Importantly, these language constructs behave like queries and, thus, can be used as part of more complex queries. Assume you have a table `R(A,B)`, let us ask our first provenance query.

```
Oracle SQL - SQLite:./examples/test.db$ SELECT * FROM R;
 A | B |
--------
 1 | 1 |
 2 | 3 |

Oracle SQL - SQLite:./examples/test.db$ PROVENANCE OF (SELECT A FROM r);

 A | PROV_R_A | PROV_R_B |
--------------------------
 1 | 1        | 1        |
 2 | 2        | 3        |
```

As you can see, `PROVENANCE OF (q)` returns the same answer as query `q`, but adds additional *provenance* attributes. These attributes store for each result row of the query the input row(s) which where used to compute the output row. For example, the query result `(1)` was derived from row `(1,1)` in table `R`. For now let us close the current session using the `\q` utility command:

```
Oracle SQL - SQLite:./examples/test.db$ \q
```

Provenance for SQL queries is only one of the features supported by GProM. A full list of SQL language extensions supported by GProM can be found in the [wiki](https://github.com/IITDBGroup/gprom/wiki/). See the [man page](https://github.com/IITDBGroup/gprom/blob/master/doc/gprom_man.md) of gprom for further information how to use the CLI of the system. 

# Installation

The [wiki](https://github.com/IITDBGroup/gprom/wiki/installation) has detailed installation instructions. In a nutshell, PUG can be compiled with support for different database backends and is linked against the C client libraries of these database backends. The installation follows the standard procedure using GNU build tools. Checkout the git repository, install all dependencies and run:

```
./autogen.sh
./configure
make
sudo make install
```

# Research and Background

The functionality of PUG is based on a long term research effort by the [IIT DBGroup](http://www.cs.iit.edu/~dbgroup/) studying how to capture provenance on-demand using instrumentation. Links to [publications](http://www.cs.iit.edu/~dbgroup/publications) and more research oriented descriptions of the techniques implemented in PUG can be found at [http://www.cs.iit.edu/~dbgroup/research](http://www.cs.iit.edu/~dbgroup/research).


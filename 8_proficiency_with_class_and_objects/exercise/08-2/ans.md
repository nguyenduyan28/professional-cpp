* Cannot load constructor, because once you create a custom constructor, it will not create a default constructor with no argument.
* Fix by add a line `Person()=default`
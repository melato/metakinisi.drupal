Copyright, 2012, 2013 Alex Athanasopoulos
This code is licensed with GPL v2, as all drupal code.

This drupal module provides the database schema and UI for the management
of public bus ride tracks, uploaded as GPX files.

The module depends on the "route" and "track" content type, which were configured manually.  

Routes represent the available routes in the bus system and are maintained through back-end scripts.

A track represents a users' recording of a bus trip with a single bus line.
It consists of an uploaded GPX file and a reference to a route.

A back-end process analyzes the uploaded GPX files and computes timings of routes between stops.  The results are stored in the tables defined by this module and are used to generate the database used by the Android app, "Athens Next Bus".

Most of the analysis of the GPX data is done with Java code that periodically processes the database.



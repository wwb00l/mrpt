/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          https://www.mrpt.org/                            |
   |                                                                           |
   | Copyright (c) 2005-2020, Individual contributors, see AUTHORS file        |
   | See: https://www.mrpt.org/Authors - All rights reserved.                  |
   | Released under BSD License. See details in https://www.mrpt.org/License   |
   +---------------------------------------------------------------------------+
 */

/** \defgroup mrpt_obs_grp [mrpt-obs]

Observation classes for all kinds of robot sensors.

<small> <a href="index.html#libs">Back to list of all libraries</a> | <a
href="modules.html" >See all modules</a> </small> <br>


# Library `mrpt-obs`

This library is part of MRPT and can be installed in Debian-based systems with:

		sudo apt install libmrpt-obs-dev

See: \ref mrpt_from_cmake

Key concepts:

<li><b>Sensor observations:</b> All sensor observations share a common virtual
base class (mrpt::obs::CObservation). There are classes to store laser scanners,
3D range images, monocular and stereo images, GPS data, odometry, etc. A concept
very related to observations is a mrpt::obs::CSensoryFrame, a set of
observations which were collected approximately at the same instant. </li>

<li><b>Rawlogs (datasets):</b> A robotics dataset can be loaded, edited and
explored by means of the class mrpt::obs::CRawlog. See also:
https://www.mrpt.org/Rawlog_Format </li>

<li><b>Actions:</b> For convenience in many Bayesian filtering algorithms, robot
actions (like 2D displacement characterized by an odometry increment) can be
represented by means of "actions". See mrpt::obs::CAction.</li>

<li><b>"Simple maps":</b> In MRPT, a "simple map" is a set of pairs: "position",
"sensory frames" (read above). The advantage of maintaining such a "simple map"
instead a metric map is that the metric maps can be rebuilt when needed with
different parameters from the raw observations, which are never lost. </li>

<li><b>CARMEN logs tools:</b> Utilities to read from CARMEN log files and load
the observations there as MRPT observations. See
mrpt::obs::carmen_log_parse_line and the applications: carmen2rawlog,
carmen2simplemap. </li>

</ul>

See the list of classes in mrpt::obs


*/

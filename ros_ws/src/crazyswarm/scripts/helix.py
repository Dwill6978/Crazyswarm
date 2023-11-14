#!/usr/bin/env python

import numpy as np

from pycrazyswarm import *
import uav_trajectory

if __name__ == "__main__":
    swarm = Crazyswarm()
    timeHelper = swarm.timeHelper
    allcfs = swarm.allcfs


    traj1 = uav_trajectory.Trajectory()
    traj1.loadcsv("uav_trajectories/scripts/CircleTraj1.csv")

    allcfs.crazyflies[0].uploadTrajectory(0,0,traj1)
    timeHelper.sleep(2.5)
    StartPos = np.array(allcfs.crazyflies[0].initialPosition)+np.array([0,0,1.0])
   # allcfs.crazyflies[0].goTo(StartPos, 0, 2.0)
    allcfs.crazyflies[0].startTrajectory(0)
    timeHelper.sleep(traj1.duration+1.0)
    allcfs.crazyflies[0].land(0.05,1.0)
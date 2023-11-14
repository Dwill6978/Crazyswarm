import numpy as np

from pycrazyswarm import *
import uav_trajectory


TAKEOFF_DURATION = 1.0
HOVER_DURATION = 3.0


def main():
    traj1 = uav_trajectory.Trajectory()
    traj1.loadcsv("figure8.csv")
    swarm = Crazyswarm()
    timeHelper = swarm.timeHelper
    cf = swarm.allcfs.crazyflies[0]
    cf3 = swarm.allcfs.crazyflies[1]


    
    TRIALS = 1
    TIMESCALE = 1.0
    for i in range(TRIALS):
        cf.uploadTrajectory(0, 0, traj1)
        cf3.uploadTrajectory(0, 0, traj1)
        timeHelper.sleep(2.5)
        #pos = np.array(cf.initialPosition) + np.array([0, 0, 1])
        #pos3 = np.array(cf3.initialPosition) + np.array([0, 0, 2])
        #cf.goTo(pos, 0, 2.0)
        #cf3.goTo(pos3, 0, 1.0)
        cf.takeoff(0.5,1)
        cf3.takeoff(1.0,2)
        timeHelper.sleep(2.5)

        cf.startTrajectory(0, timescale=TIMESCALE)
        cf3.startTrajectory(0, timescale=TIMESCALE, reverse=True)
        timeHelper.sleep(traj1.duration * TIMESCALE + 2.0)
      #  allcfs.startTrajectory(0, timescale=TIMESCALE, reverse=True)
        #timeHelper.sleep(traj1.duration * TIMESCALE + 2.0)

        cf.land(targetHeight=0.06, duration=2.0)
        cf3.land(targetHeight=0.06, duration=2.0)
        timeHelper.sleep(3.0)

    

    #timeHelper.sleep(TAKEOFF_DURATION)
    #cf.takeoff(targetHeight=0.75, duration=TAKEOFF_DURATION)
    #cf3.takeoff(targetHeight=1.75, duration=TAKEOFF_DURATION)
    #timeHelper.sleep(TAKEOFF_DURATION + HOVER_DURATION)


    #cf.land(targetHeight=0.04, duration=2.5)
    #cf3.land(targetHeight=0.04, duration=2.5)
    #timeHelper.sleep(TAKEOFF_DURATION)


if __name__ == "__main__":
    main()

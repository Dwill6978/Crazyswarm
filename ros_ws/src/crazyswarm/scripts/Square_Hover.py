"""Single CF: takeoff, follow absolute-coords waypoints, land."""

import numpy as np

from pycrazyswarm import Crazyswarm


Z = 1.0
TAKEOFF_DURATION = 3.0
GOTO_DURATION = 5.0
WAYPOINTS = np.array([
    (0.0, 0.0, Z),
    (-0.75,0.0, Z),
    (-0.75, -0.75, Z),
    (0.0, -0.75, Z),
    (0.0, 0.0, Z),
    
    
])


def main():
    swarm = Crazyswarm()
    timeHelper = swarm.timeHelper
    allcfs = swarm.allcfs
    
    allcfs.crazyflies[0].takeoff(Z,TAKEOFF_DURATION)

    for cf in allcfs.crazyflies:
        for p in WAYPOINTS:
            cf.goTo(cf.initialPosition + p, yaw=0.0, duration=GOTO_DURATION)
            timeHelper.sleep(GOTO_DURATION + 1.0)

    allcfs.land(targetHeight=0.05, duration=TAKEOFF_DURATION)
    timeHelper.sleep(TAKEOFF_DURATION + 1.0)
    

if __name__ == "__main__":
    main()

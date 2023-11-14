"""Takeoff-hover-land for one CF. Useful to validate hardware config."""

import pycrazyswarm


TAKEOFF_DURATION = 2.0
HOVER_DURATION = 3.0


def main():
    swarm = pycrazyswarm.Crazyswarm()
    timeHelper = swarm.timeHelper
    cf = swarm.allcfs.crazyflies[0]

    timeHelper.sleep(TAKEOFF_DURATION)
    cf.takeoff(targetHeight=0.75, duration=TAKEOFF_DURATION)
    timeHelper.sleep(TAKEOFF_DURATION + HOVER_DURATION)
    cf.land(targetHeight=0.04, duration=2.5)
    timeHelper.sleep(TAKEOFF_DURATION)


if __name__ == "__main__":
    main()

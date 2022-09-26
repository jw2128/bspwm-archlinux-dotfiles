#Shell Script to Launch Polybar.                                                                                    
#!/usr/bin/env sh

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -x polybar >/dev/null; do sleep 50; done

# Launch
polybar main & polybar ballzz & polybar LinusTorballzz

echo "Bar launched..."

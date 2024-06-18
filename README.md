# Overview
- One or more philosophers sit at a round table
There is a large bowl of spaghetti in the middle of the table

- The philosophers alternatively **eat**, **think**, or **sleep**
While they are eating, they are not thinking nor sleeping;
while thinkimg, they are not eating nor sleeping;
and of course, while sleeping, they are not eating nor thinking

- There are also forks on the table. There are **as many forks as philosophers**

- Because serving and eating spaghetti with only one fork is very inconvenient, a philosopher takes
their right and their left forks to eat, one in each hand

- When a philospher has finished eating, they put their forks back on the table and start sleeping. Once
awake, they start thinking again. The simulation stops when a philosopher dies of starvation

- Every philosopher needs to eat and should never starve

- Philosophers don't speak with each other

- Philosophers don't know if another philosopher is about to die

- No need to say that philosophers should avoid dying

# Rules:
```sh
./program <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [number_of_times_each_philosopher_must_eat]
```
- **number_of_philosophers**: the number of philosophers and also the number of forks
- **time_to_die** (in milliseconds): If a philosopher didn't start eating **time_to_die** milliseconds since the beginning of their last meal
or the beginning of the simulation, they die
- **time_to_eat** (in milliseconds): The time it takes for a philosopher to eat. During that time, they will need to hold two forks
- **time_to_sleep** (in milliseconds): The time a philosopher will spend sleeping
- **number_of_times_each_philosopher_must_eat** (optional argument): If all philosophers have eaten at leat **number_of_times_each_philosopher_must_eat**
time, the simulation stops. If not specified, the simulation stops when a philosopher dies

- Each philosopher has a number ranging from 1 to **number_of_philosophers**
- Philosopher number 1 sits next to philosopher number **number_of_philosophers**. Any other philospher number **N** sits
between philosopher number **N - 1** and philosopher number **N + 1**

## Logs
- Any state change of a philosopher must be formatted as follows:
    - *timestamp_in_ms X has taken a fork*
    - *timestamp_in_ms X is eating*
    - *timestamp_in_ms X is sleeping*
    - *timestamp_in_ms X is thinking*
    - *timestamp_in_ms X died*
> Replace *timestamp_in_mx* with the current timestamp in milliseconds and X with the philospher number.

- A displayed state message should not be mixed up with another message
- A message announcing a philosopher died should be displayed no more than 10 ms after the actual death of the philosopher
- Again, philosophers should avoid dying!

> Your program must not have any **data races**

# Mandatory Part
| Title | Values |
|-------|--------|
| Program name | philo |
| Turn in files | Makefile, *.h, *.c, in directory philo/ |
| Makefile | NAME, all, clean, fclean, re |
| Arguments | number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat] |
| External functs. | memset, printf, malloc, free, write, usleep, gettimeofday, pthread_create, pthread_detach, pthread_join, pthread_mutex_init, pthread_mutex_destroy, pthread_mutex_lock, pthread_mutex_unlock |
| Libft authorized | No |
| Description | Philosophers with thread and mutexes |

The specific rules for the mandatory part are:
- Each philosopher should be thread

- There is one fork between each pair of philosophers. Therefire, f there are several philosophers, each philosopher has a fork 
ont their left side adn a fork on their right side. If there is only one philosopher, there should be only one fork ont the table

- To prevent philosophers from duplication forks, you should protect the forks state with a mutex for each of them

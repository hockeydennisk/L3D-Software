#ifndef H_SNOW
#define H_SNOW

typedef struct {
    float x, y, z;
} vector;

void snowstorm(void);
void render_snow(void);
void render_background(void);

void update_particles(float* particles, int count, float accel_x, float accel_y, float accel_z);
void render_particles(float* particles, int count);

#endif

//
// Created by Verose on 12/14/2018.
//

#ifndef FREEFROMHOLDERS_MAIN_H
#define FREEFROMHOLDERS_MAIN_H

#include <igl/opengl/glfw/Viewer.h>
#include <igl/cotmatrix.h>
#include <igl/random_points_on_mesh.h>
#include <igl/exact_geodesic.h>
#include <igl/colormap.h>
#include <igl/unproject_onto_mesh.h>
#include <igl/PI.h>
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <igl/readOBJ.h>
#include <igl/writeOBJ.h>
#include <iostream>


void calc_grip(const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::VectorXd &d,
               const double t, std::vector<Eigen::Vector2i> &cuts);

bool is_other_edge(const int v1, const int v2, const double t, const Eigen::VectorXd &d);

int get_edge_closer_v_id(const Eigen::Vector2i e, const Eigen::VectorXd &d);

void save_grip_mesh(const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::VectorXd &d, const double t);

void move_gripper_in_normal_direction(double holder_width, Eigen::MatrixXd &V_mesh,
                                      Eigen::MatrixXi &F_grip_out, Eigen::MatrixXd &V_grip_out);

void display_cut(const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, Eigen::VectorXd d,
                 igl::opengl::glfw::Viewer &viewer, const std::vector<Eigen::Vector2i> &cuts);

void invert_gripper_normal_direction(Eigen::MatrixXd &V_grip, Eigen::MatrixXi &F_grip, Eigen::MatrixXi &F_grip_inv);

void combine_meshes(Eigen::MatrixXd &V_grip_in, Eigen::MatrixXi &F_grip_in,
                    Eigen::MatrixXd &V_grip_out, Eigen::MatrixXi &F_grip_out,
                    Eigen::MatrixXd &V_holder, Eigen::MatrixXi &F_holder);

void export_smooth_gripper_mesh(const std::unordered_map<int, Eigen::Vector3d> &old_v_id_to_new_v,
                                const std::set<int> &altered_vertices_ids, Eigen::MatrixXd &V_for_smooth,
                                Eigen::MatrixXi &F_for_smooth);

void calc_smooth_gripper(const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::VectorXd &d, const double t,
                         Eigen::MatrixXd &V_for_smooth, Eigen::MatrixXi &F_for_smooth);

int get_edge_further_v_id(const Eigen::Vector2i e, const Eigen::VectorXd &d);


void find_new_p_on_edge(const int closer_v_id, const double step_size, const int further_v_id, const Eigen::MatrixXd &V,
                        Eigen::RowVector3d &new_point);

void gen_smooth_gripper_mesh(const Eigen::MatrixXd &V, const Eigen::MatrixXi &F,
                             std::unordered_map<int, Eigen::Vector3d> &old_v_id_to_new_v,
                             const std::set<int> &altered_vertices_ids, Eigen::MatrixXd &V_for_smooth,
                             Eigen::MatrixXi &F_for_smooth);

#endif //FREEFROMHOLDERS_MAIN_H
